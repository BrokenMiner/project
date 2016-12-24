//-----------------------------------------------------------------------------
// Copyright (c) 2012 GarageGames, LLC
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#include "platform/platform.h"
#include "gfx/gl/gfxGLDevice.h"
#include "platform/platformGL.h"

#include "gfx/gfxCubemap.h"
#include "gfx/screenshot.h"
#include "gfx/gfxDrawUtil.h"

#include "gfx/gl/gfxGLEnumTranslate.h"
#include "gfx/gl/gfxGLVertexBuffer.h"
#include "gfx/gl/gfxGLPrimitiveBuffer.h"
#include "gfx/gl/gfxGLTextureTarget.h"
#include "gfx/gl/gfxGLTextureManager.h"
#include "gfx/gl/gfxGLTextureObject.h"
#include "gfx/gl/gfxGLCubemap.h"
#include "gfx/gl/gfxGLCardProfiler.h"
#include "gfx/gl/gfxGLWindowTarget.h"
#include "gfx/gl/ggl/ggl.h" 
#include "platform/platformDlibrary.h"
#include "gfx/gl/gfxGLShader.h"
#include "gfx/primBuilder.h"
#include "console/console.h"
#include "gfx/gl/gfxGLOcclusionQuery.h"
#include "materials/shaderData.h"
#include "gfx/gl/gfxGLStateCache.h"
#include "gfx/gl/gfxGLVertexAttribLocation.h"
#include "gfx/gl/gfxGLVertexDecl.h"

GFXAdapter::CreateDeviceInstanceDelegate GFXGLDevice::mCreateDeviceInstance(GFXGLDevice::createInstance); 

GFXDevice *GFXGLDevice::createInstance( U32 adapterIndex )
{
   return new GFXGLDevice(adapterIndex);
}

namespace GL
{
   extern void gglPerformBinds();
   extern void gglPerformExtensionBinds(void *context);
}

void loadGLCore()
{
   static bool coreLoaded = false; // Guess what this is for.
   if(coreLoaded)
      return;
   coreLoaded = true;
   
   // Make sure we've got our GL bindings.
   GL::gglPerformBinds();
}

void loadGLExtensions(void *context)
{
   static bool extensionsLoaded = false;
   if(extensionsLoaded)
      return;
   extensionsLoaded = true;
   
   GL::gglPerformExtensionBinds(context);
}

void STDCALL glDebugCallback(GLenum source, GLenum type, GLuint id,
    GLenum severity, GLsizei length, const GLchar* message, void* userParam)
{
    if (severity == GL_DEBUG_SEVERITY_HIGH)
        Con::errorf("OPENGL: %s", message);
    else if (severity == GL_DEBUG_SEVERITY_MEDIUM)
        Con::warnf("OPENGL: %s", message);
    else if (severity == GL_DEBUG_SEVERITY_LOW)
        Con::printf("OPENGL: %s", message);
}

void STDCALL glAmdDebugCallback(GLuint id, GLenum category, GLenum severity, GLsizei length,
    const GLchar* message, GLvoid* userParam)
{
    if (severity == GL_DEBUG_SEVERITY_HIGH)
        Con::errorf("AMDOPENGL: %s", message);
    else if (severity == GL_DEBUG_SEVERITY_MEDIUM)
        Con::warnf("AMDOPENGL: %s", message);
    else if (severity == GL_DEBUG_SEVERITY_LOW)
        Con::printf("AMDOPENGL: %s", message);
}


// >>>> OPENGL INTEL WORKAROUND @todo OPENGL INTEL remove
PFNGLBINDFRAMEBUFFERPROC __openglBindFramebuffer = NULL;

void STDCALL _t3d_glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    if( target == GL_FRAMEBUFFER )
    {
        if( GFXGL->getOpenglCache()->getCacheBinded( GL_DRAW_FRAMEBUFFER ) == framebuffer
            && GFXGL->getOpenglCache()->getCacheBinded( GL_READ_FRAMEBUFFER ) == framebuffer )
            return;
    }
    else if( GFXGL->getOpenglCache()->getCacheBinded( target ) == framebuffer )
        return;

    __openglBindFramebuffer(target, framebuffer);
    GFXGL->getOpenglCache()->setCacheBinded( target, framebuffer);
}
// <<<< OPENGL INTEL WORKAROUND


void GFXGLDevice::initGLState()
{  
   // We don't currently need to sync device state with a known good place because we are
   // going to set everything in GFXGLStateBlock, but if we change our GFXGLStateBlock strategy, this may
   // need to happen.
   
   // Deal with the card profiler here when we know we have a valid context.
   mCardProfiler = new GFXGLCardProfiler();
   mCardProfiler->init(); 
   glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, (GLint*)&mMaxShaderTextures);
   glGetIntegerv(GL_MAX_TEXTURE_UNITS, (GLint*)&mMaxFFTextures);
<<<<<<< HEAD
   glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS, (GLint*)&mMaxTRColors);
   mMaxTRColors = getMin( mMaxTRColors, (U32)(GFXTextureTarget::MaxRenderSlotId-1) );
   
   glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
   
   // Setting mPixelShaderVersion to 3.0 will allow Advanced Lighting to run.   
   mPixelShaderVersion = 3.0;

   mSupportsAnisotropic = mCardProfiler->queryProfile( "GL::suppAnisotropic" );

   String vendorStr = (const char*)glGetString( GL_VENDOR );
   if( vendorStr.find("NVIDIA", 0, String::NoCase | String::Left) != String::NPos)
      mUseGlMap = false;


   if( vendorStr.find("INTEL", 0, String::NoCase | String::Left ) != String::NPos)
   {
      // @todo OPENGL INTEL - This is a workaround for a warning spam or even crashes with actual framebuffer code, remove when implemented TGL layer.
      __openglBindFramebuffer = glBindFramebuffer;
      glBindFramebuffer = &_t3d_glBindFramebuffer;
   }

#ifdef TORQUE_NSIGHT_WORKAROUND
   __GLEW_ARB_buffer_storage = false;
#endif
#if TORQUE_DEBUG
   if( gglHasExtension(ARB_debug_output) )
   {
      glEnable(GL_DEBUG_OUTPUT);
      glDebugMessageCallbackARB(glDebugCallback, NULL);
      glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB);
      GLuint unusedIds = 0;
      glDebugMessageControlARB(GL_DONT_CARE,
            GL_DONT_CARE,
            GL_DONT_CARE,
            0,
            &unusedIds,
            GL_TRUE);
   }
   else if(gglHasExtension(AMD_debug_output))
   {
      glEnable(GL_DEBUG_OUTPUT);
      glDebugMessageCallbackAMD(glAmdDebugCallback, NULL);      
      //glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB);
      GLuint unusedIds = 0;
      glDebugMessageEnableAMD(GL_DONT_CARE, GL_DONT_CARE, 0,&unusedIds, GL_TRUE);
   }
#endif

   PlatformGL::setVSync(smDisableVSync ? 0 : 1);

   //OpenGL 3 need a binded VAO for render
   GLuint vao;
   glGenVertexArrays(1, &vao);
   glBindVertexArray(vao);
=======
   
   glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
   
   // Apple's drivers lie and claim that everything supports fragment shaders.  Conveniently they don't lie about the number
   // of supported image units.  Checking for 16 or more image units ensures that we don't try and use pixel shaders on
   // cards which don't support them.
   if(mCardProfiler->queryProfile("GL::suppFragmentShader") && mMaxShaderTextures >= 16)
      mPixelShaderVersion = 2.0f;
   else
      mPixelShaderVersion = 0.0f;
   
   // MACHAX - Setting mPixelShaderVersion to 3.0 will allow Advanced Lighting
   // to run.  At the time of writing (6/18) it doesn't quite work yet.
   if(Con::getBoolVariable("$pref::machax::enableAdvancedLighting", false))
      mPixelShaderVersion = 3.0f;
      
   mSupportsAnisotropic = mCardProfiler->queryProfile( "GL::suppAnisotropic" );
>>>>>>> omni_engine
}

GFXGLDevice::GFXGLDevice(U32 adapterIndex) :
   mAdapterIndex(adapterIndex),
<<<<<<< HEAD
   mCurrentPB(NULL),
   mDrawInstancesCount(0),
=======
   mCurrentVB(NULL),
   mCurrentPB(NULL),
>>>>>>> omni_engine
   m_mCurrentWorld(true),
   m_mCurrentView(true),
   mContext(NULL),
   mPixelFormat(NULL),
   mPixelShaderVersion(0.0f),
   mMaxShaderTextures(2),
   mMaxFFTextures(2),
<<<<<<< HEAD
   mMaxTRColors(1),
   mClip(0, 0, 0, 0),
   mCurrentShader( NULL ),
   mNeedUpdateVertexAttrib(false),
   mWindowRT(NULL),
   mUseGlMap(true)
{
   for(int i = 0; i < VERTEX_STREAM_COUNT; ++i)
   {
      mCurrentVB[i] = NULL;
      mCurrentVB_Divisor[i] = 0;
   }

=======
   mClip(0, 0, 0, 0)
{
>>>>>>> omni_engine
   loadGLCore();

   GFXGLEnumTranslate::init();

   GFXVertexColor::setSwizzle( &Swizzles::rgba );
<<<<<<< HEAD

   // OpenGL have native RGB, no need swizzle
   mDeviceSwizzle32 = &Swizzles::rgba;
   mDeviceSwizzle24 = &Swizzles::rgb;
=======
   mDeviceSwizzle32 = &Swizzles::bgra;
   mDeviceSwizzle24 = &Swizzles::bgr;
>>>>>>> omni_engine

   mTextureManager = new GFXGLTextureManager();
   gScreenShot = new ScreenShot();

   for(U32 i = 0; i < TEXTURE_STAGE_COUNT; i++)
      mActiveTextureType[i] = GL_ZERO;

   mNumVertexStream = 2;

   for(int i = 0; i < GS_COUNT; ++i)
      mModelViewProjSC[i] = NULL;

   mOpenglStateCache = new GFXGLStateCache;
}

GFXGLDevice::~GFXGLDevice()
{
   mCurrentStateBlock = NULL;
<<<<<<< HEAD

   for(int i = 0; i < VERTEX_STREAM_COUNT; ++i)      
      mCurrentVB[i] = NULL;
   mCurrentPB = NULL;
   
=======
   mCurrentPB = NULL;
   mCurrentVB = NULL;
>>>>>>> omni_engine
   for(U32 i = 0; i < mVolatileVBs.size(); i++)
      mVolatileVBs[i] = NULL;
   for(U32 i = 0; i < mVolatilePBs.size(); i++)
      mVolatilePBs[i] = NULL;

   // Clear out our current texture references
   for (U32 i = 0; i < TEXTURE_STAGE_COUNT; i++)
   {
      mCurrentTexture[i] = NULL;
      mNewTexture[i] = NULL;
      mCurrentCubemap[i] = NULL;
      mNewCubemap[i] = NULL;
   }

   mRTStack.clear();
   mCurrentRT = NULL;

   if( mTextureManager )
   {
      mTextureManager->zombify();
      mTextureManager->kill();
   }

   GFXResource* walk = mResourceListHead;
   while(walk)
   {
      walk->zombify();
      walk = walk->getNextResource();
   }
      
   if( mCardProfiler )
      SAFE_DELETE( mCardProfiler );

   SAFE_DELETE( gScreenShot );

   SAFE_DELETE( mOpenglStateCache );
}

void GFXGLDevice::zombify()
{
   mTextureManager->zombify();
<<<<<<< HEAD

   for(int i = 0; i < VERTEX_STREAM_COUNT; ++i)   
      if(mCurrentVB[i])
         mCurrentVB[i]->finish();
   if(mCurrentPB)
         mCurrentPB->finish();
   
=======
   if(mCurrentVB)
      mCurrentVB->finish();
   if(mCurrentPB)
      mCurrentPB->finish();
>>>>>>> omni_engine
   //mVolatileVBs.clear();
   //mVolatilePBs.clear();
   GFXResource* walk = mResourceListHead;
   while(walk)
   {
      walk->zombify();
      walk = walk->getNextResource();
   }
}

void GFXGLDevice::resurrect()
{
   GFXResource* walk = mResourceListHead;
   while(walk)
   {
      walk->resurrect();
      walk = walk->getNextResource();
   }
<<<<<<< HEAD
   for(int i = 0; i < VERTEX_STREAM_COUNT; ++i)   
      if(mCurrentVB[i])
         mCurrentVB[i]->prepare();
   if(mCurrentPB)
      mCurrentPB->prepare();
   
=======
   if(mCurrentVB)
      mCurrentVB->prepare();
   if(mCurrentPB)
      mCurrentPB->prepare();
>>>>>>> omni_engine
   mTextureManager->resurrect();
}

GFXVertexBuffer* GFXGLDevice::findVolatileVBO(U32 numVerts, const GFXVertexFormat *vertexFormat, U32 vertSize)
{
   for(U32 i = 0; i < mVolatileVBs.size(); i++)
      if (  mVolatileVBs[i]->mNumVerts >= numVerts &&
            mVolatileVBs[i]->mVertexFormat.isEqual( *vertexFormat ) &&
            mVolatileVBs[i]->mVertexSize == vertSize &&
            mVolatileVBs[i]->getRefCount() == 1 )
         return mVolatileVBs[i];

   // No existing VB, so create one
   StrongRefPtr<GFXGLVertexBuffer> buf(new GFXGLVertexBuffer(GFX, numVerts, vertexFormat, vertSize, GFXBufferTypeVolatile));
   buf->registerResourceWithDevice(this);
   mVolatileVBs.push_back(buf);
   return buf.getPointer();
}

GFXPrimitiveBuffer* GFXGLDevice::findVolatilePBO(U32 numIndices, U32 numPrimitives)
{
   for(U32 i = 0; i < mVolatilePBs.size(); i++)
      if((mVolatilePBs[i]->mIndexCount >= numIndices) && (mVolatilePBs[i]->getRefCount() == 1))
         return mVolatilePBs[i];
   
   // No existing PB, so create one
   StrongRefPtr<GFXGLPrimitiveBuffer> buf(new GFXGLPrimitiveBuffer(GFX, numIndices, numPrimitives, GFXBufferTypeVolatile));
   buf->registerResourceWithDevice(this);
   mVolatilePBs.push_back(buf);
   return buf.getPointer();
}

GFXVertexBuffer *GFXGLDevice::allocVertexBuffer(   U32 numVerts, 
                                                   const GFXVertexFormat *vertexFormat, 
                                                   U32 vertSize, 
                                                   GFXBufferType bufferType ) 
{
   if(bufferType == GFXBufferTypeVolatile)
      return findVolatileVBO(numVerts, vertexFormat, vertSize);
         
   GFXGLVertexBuffer* buf = new GFXGLVertexBuffer( GFX, numVerts, vertexFormat, vertSize, bufferType );
   buf->registerResourceWithDevice(this);
   return buf;
}

GFXPrimitiveBuffer *GFXGLDevice::allocPrimitiveBuffer( U32 numIndices, U32 numPrimitives, GFXBufferType bufferType ) 
{
   if(bufferType == GFXBufferTypeVolatile)
      return findVolatilePBO(numIndices, numPrimitives);
         
   GFXGLPrimitiveBuffer* buf = new GFXGLPrimitiveBuffer(GFX, numIndices, numPrimitives, bufferType);
   buf->registerResourceWithDevice(this);
   return buf;
}

void GFXGLDevice::setVertexStream( U32 stream, GFXVertexBuffer *buffer )
{
<<<<<<< HEAD
   AssertFatal(stream <= 1, "GFXGLDevice::setVertexStream only support 2 stream (0: data, 1: instancing)");

   //if(mCurrentVB[stream] != buffer)
   {
      // Reset the state the old VB required, then set the state the new VB requires.
      if( mCurrentVB[stream] )
      {     
         mCurrentVB[stream]->finish();
      }

      mCurrentVB[stream] = static_cast<GFXGLVertexBuffer*>( buffer );

      mNeedUpdateVertexAttrib = true;
   }
=======
   AssertFatal( stream == 0, "GFXGLDevice::setVertexStream - We don't support multiple vertex streams!" );

   // Reset the state the old VB required, then set the state the new VB requires.
   if ( mCurrentVB ) 
      mCurrentVB->finish();

   mCurrentVB = static_cast<GFXGLVertexBuffer*>( buffer );
   if ( mCurrentVB )
      mCurrentVB->prepare();
>>>>>>> omni_engine
}

void GFXGLDevice::setVertexStreamFrequency( U32 stream, U32 frequency )
{
<<<<<<< HEAD
   if( stream == 0 )
   {
      mCurrentVB_Divisor[stream] = 0; // non instanced, is vertex buffer
      mDrawInstancesCount = frequency; // instances count
   }
   else
   {
      AssertFatal(frequency <= 1, "GFXGLDevice::setVertexStreamFrequency only support 0/1 for this stream" );
      if( stream == 1 && frequency == 1 )
         mCurrentVB_Divisor[stream] = 1; // instances data need a frequency of 1
      else
         mCurrentVB_Divisor[stream] = 0;
   }

   mNeedUpdateVertexAttrib = true;
=======
   // We don't support vertex stream frequency or mesh instancing in OGL yet.
>>>>>>> omni_engine
}

GFXCubemap* GFXGLDevice::createCubemap()
{ 
   GFXGLCubemap* cube = new GFXGLCubemap();
   cube->registerResourceWithDevice(this);
   return cube; 
};

void GFXGLDevice::endSceneInternal() 
{
   // nothing to do for opengl
   mCanCurrentlyRender = false;
}

void GFXGLDevice::clear(U32 flags, ColorI color, F32 z, U32 stencil)
{
   // Make sure we have flushed our render target state.
   _updateRenderTargets();
   
<<<<<<< HEAD
   bool writeAllColors = true;
   bool zwrite = true;   
   bool writeAllStencil = true;
   const GFXStateBlockDesc *desc = NULL;
   if (mCurrentGLStateBlock)
   {
      desc = &mCurrentGLStateBlock->getDesc();
      zwrite = desc->zWriteEnable;
      writeAllColors = desc->colorWriteRed && desc->colorWriteGreen && desc->colorWriteBlue && desc->colorWriteAlpha;
      writeAllStencil = desc->stencilWriteMask == 0xFFFFFFFF;
   }
   
   glColorMask(true, true, true, true);
   glDepthMask(true);
   glStencilMask(0xFFFFFFFF);
   

   ColorF c = color;   
=======
   bool zwrite = true;
   if (mCurrentGLStateBlock)
   {
      zwrite = mCurrentGLStateBlock->getDesc().zWriteEnable;
   }   
   
   glDepthMask(true);
   ColorF c = color;
>>>>>>> omni_engine
   glClearColor(c.red, c.green, c.blue, c.alpha);
   glClearDepth(z);
   glClearStencil(stencil);

   GLbitfield clearflags = 0;
   clearflags |= (flags & GFXClearTarget)   ? GL_COLOR_BUFFER_BIT : 0;
   clearflags |= (flags & GFXClearZBuffer)  ? GL_DEPTH_BUFFER_BIT : 0;
   clearflags |= (flags & GFXClearStencil)  ? GL_STENCIL_BUFFER_BIT : 0;

   glClear(clearflags);
<<<<<<< HEAD

   if(!writeAllColors)
      glColorMask(desc->colorWriteRed, desc->colorWriteGreen, desc->colorWriteBlue, desc->colorWriteAlpha);
   
   if(!zwrite)
      glDepthMask(false);

   if(!writeAllStencil)
      glStencilMask(desc->stencilWriteMask);
}

// Given a primitive type and a number of primitives, return the number of indexes/vertexes used.
inline GLsizei GFXGLDevice::primCountToIndexCount(GFXPrimitiveType primType, U32 primitiveCount)
=======
   
   if(!zwrite)
      glDepthMask(false);
}

// Given a primitive type and a number of primitives, return the number of indexes/vertexes used.
GLsizei GFXGLDevice::primCountToIndexCount(GFXPrimitiveType primType, U32 primitiveCount)
>>>>>>> omni_engine
{
   switch (primType)
   {
      case GFXPointList :
         return primitiveCount;
         break;
      case GFXLineList :
         return primitiveCount * 2;
         break;
      case GFXLineStrip :
         return primitiveCount + 1;
         break;
      case GFXTriangleList :
         return primitiveCount * 3;
         break;
      case GFXTriangleStrip :
         return 2 + primitiveCount;
         break;
      case GFXTriangleFan :
         return 2 + primitiveCount;
         break;
      default:
         AssertFatal(false, "GFXGLDevice::primCountToIndexCount - unrecognized prim type");
         break;
   }
   
   return 0;
}

GFXVertexDecl* GFXGLDevice::allocVertexDecl( const GFXVertexFormat *vertexFormat ) 
{
   typedef Map<void*, GFXGLVertexDecl> GFXGLVertexDeclMap;
   static GFXGLVertexDeclMap declMap;   
   GFXGLVertexDeclMap::Iterator itr = declMap.find( (void*)vertexFormat->getDescription().c_str() ); // description string are interned, safe to use c_str()
   if(itr != declMap.end())
      return &itr->value;

   GFXGLVertexDecl &decl = declMap[(void*)vertexFormat->getDescription().c_str()];   
   decl.init(vertexFormat);
   return &decl;
}

void GFXGLDevice::setVertexDecl( const GFXVertexDecl *decl )
{
   static_cast<const GFXGLVertexDecl*>(decl)->prepareVertexFormat();
}

inline void GFXGLDevice::preDrawPrimitive()
{
   if( mStateDirty )
   {
      updateStates();
   }
   
   if(mCurrentShaderConstBuffer)
      setShaderConstBufferInternal(mCurrentShaderConstBuffer);

   if( mNeedUpdateVertexAttrib )
   {
      AssertFatal(mCurrVertexDecl, "");
      const GFXGLVertexDecl* decl = static_cast<const GFXGLVertexDecl*>(mCurrVertexDecl);
      
      for(int i = 0; i < getNumVertexStreams(); ++i)
      {
         if(mCurrentVB[i])
         {
            mCurrentVB[i]->prepare(i, mCurrentVB_Divisor[i]);    // GL_ARB_vertex_attrib_binding  
            decl->prepareBuffer_old( i, mCurrentVB[i]->mBuffer, mCurrentVB_Divisor[i] ); // old vertex buffer/format
         }
      }

      decl->updateActiveVertexAttrib( GFXGL->getOpenglCache()->getCacheVertexAttribActive() );         
   }   

   mNeedUpdateVertexAttrib = false;
}

inline void GFXGLDevice::postDrawPrimitive(U32 primitiveCount)
{
   mDeviceStatistics.mDrawCalls++;
   mDeviceStatistics.mPolyCount += primitiveCount;
}

void GFXGLDevice::drawPrimitive( GFXPrimitiveType primType, U32 vertexStart, U32 primitiveCount ) 
{
   preDrawPrimitive();
<<<<<<< HEAD
  
   vertexStart += mCurrentVB[0]->mBufferVertexOffset;

   if(mDrawInstancesCount)
      glDrawArraysInstanced(GFXGLPrimType[primType], vertexStart, primCountToIndexCount(primType, primitiveCount), mDrawInstancesCount);
   else
      glDrawArrays(GFXGLPrimType[primType], vertexStart, primCountToIndexCount(primType, primitiveCount));   
=======
   
   // There are some odd performance issues if a buffer is bound to GL_ELEMENT_ARRAY_BUFFER when glDrawArrays is called.  Unbinding the buffer
   // improves performance by 10%.
   if(mCurrentPB)
      mCurrentPB->finish();

   glDrawArrays(GFXGLPrimType[primType], vertexStart, primCountToIndexCount(primType, primitiveCount));
   
   if(mCurrentPB)
      mCurrentPB->prepare();
>>>>>>> omni_engine

   postDrawPrimitive(primitiveCount);
}

void GFXGLDevice::drawIndexedPrimitive(   GFXPrimitiveType primType, 
                                          U32 startVertex, 
                                          U32 minIndex, 
                                          U32 numVerts, 
                                          U32 startIndex, 
                                          U32 primitiveCount )
{
   AssertFatal( startVertex == 0, "GFXGLDevice::drawIndexedPrimitive() - Non-zero startVertex unsupported!" );

   preDrawPrimitive();

   U16* buf = (U16*)static_cast<GFXGLPrimitiveBuffer*>(mCurrentPrimitiveBuffer.getPointer())->getBuffer() + startIndex;

<<<<<<< HEAD
   const U32 baseVertex = mCurrentVB[0]->mBufferVertexOffset;

   if(mDrawInstancesCount)
      glDrawElementsInstancedBaseVertex(GFXGLPrimType[primType], primCountToIndexCount(primType, primitiveCount), GL_UNSIGNED_SHORT, buf, mDrawInstancesCount, baseVertex);
   else
      glDrawElementsBaseVertex(GFXGLPrimType[primType], primCountToIndexCount(primType, primitiveCount), GL_UNSIGNED_SHORT, buf, baseVertex);
=======
   glDrawElements(GFXGLPrimType[primType], primCountToIndexCount(primType, primitiveCount), GL_UNSIGNED_SHORT, buf);
>>>>>>> omni_engine

   postDrawPrimitive(primitiveCount);
}

void GFXGLDevice::setPB(GFXGLPrimitiveBuffer* pb)
{
   if(mCurrentPB)
      mCurrentPB->finish();
   mCurrentPB = pb;
}

void GFXGLDevice::setLightInternal(U32 lightStage, const GFXLightInfo light, bool lightEnable)
{
<<<<<<< HEAD
   // ONLY NEEDED ON FFP
=======
   if(!lightEnable)
   {
      glDisable(GL_LIGHT0 + lightStage);
      return;
   }

   if(light.mType == GFXLightInfo::Ambient)
   {
      AssertFatal(false, "Instead of setting an ambient light you should set the global ambient color.");
      return;
   }

   GLenum lightEnum = GL_LIGHT0 + lightStage;
   glLightfv(lightEnum, GL_AMBIENT, (GLfloat*)&light.mAmbient);
   glLightfv(lightEnum, GL_DIFFUSE, (GLfloat*)&light.mColor);
   glLightfv(lightEnum, GL_SPECULAR, (GLfloat*)&light.mColor);

   F32 pos[4];

   if(light.mType != GFXLightInfo::Vector)
   {
      dMemcpy(pos, &light.mPos, sizeof(light.mPos));
      pos[3] = 1.0;
   }
   else
   {
      dMemcpy(pos, &light.mDirection, sizeof(light.mDirection));
      pos[3] = 0.0;
   }
   // Harcoded attenuation
   glLightf(lightEnum, GL_CONSTANT_ATTENUATION, 1.0f);
   glLightf(lightEnum, GL_LINEAR_ATTENUATION, 0.1f);
   glLightf(lightEnum, GL_QUADRATIC_ATTENUATION, 0.0f);

   glLightfv(lightEnum, GL_POSITION, (GLfloat*)&pos);
   glEnable(lightEnum);
>>>>>>> omni_engine
}

void GFXGLDevice::setLightMaterialInternal(const GFXLightMaterial mat)
{
<<<<<<< HEAD
   // ONLY NEEDED ON FFP
=======
   // CodeReview - Setting these for front and back is unnecessary.  We should consider
   // checking what faces we're culling and setting this only for the unculled faces.
   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, (GLfloat*)&mat.ambient);
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, (GLfloat*)&mat.diffuse);
   glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, (GLfloat*)&mat.specular);
   glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, (GLfloat*)&mat.emissive);
   glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, mat.shininess);
>>>>>>> omni_engine
}

void GFXGLDevice::setGlobalAmbientInternal(ColorF color)
{
   glLightModelfv(GL_LIGHT_MODEL_AMBIENT, (GLfloat*)&color);
}

void GFXGLDevice::setTextureInternal(U32 textureUnit, const GFXTextureObject*texture)
{
<<<<<<< HEAD
   GFXGLTextureObject *tex = static_cast<GFXGLTextureObject*>(const_cast<GFXTextureObject*>(texture));
   if (tex)
   {
=======
   const GFXGLTextureObject *tex = static_cast<const GFXGLTextureObject*>(texture);
   glActiveTexture(GL_TEXTURE0 + textureUnit);
   if (tex)
   {
      // GFXGLTextureObject::bind also handles applying the current sampler state.
      if(mActiveTextureType[textureUnit] != tex->getBinding() && mActiveTextureType[textureUnit] != GL_ZERO)
      {
         glBindTexture(mActiveTextureType[textureUnit], 0);
         glDisable(mActiveTextureType[textureUnit]);
      }
>>>>>>> omni_engine
      mActiveTextureType[textureUnit] = tex->getBinding();
      tex->bind(textureUnit);
   } 
   else if(mActiveTextureType[textureUnit] != GL_ZERO)
   {
<<<<<<< HEAD
      glActiveTexture(GL_TEXTURE0 + textureUnit);
      glBindTexture(mActiveTextureType[textureUnit], 0);
      getOpenglCache()->setCacheBindedTex(textureUnit, mActiveTextureType[textureUnit], 0);
      mActiveTextureType[textureUnit] = GL_ZERO;
   }
=======
      glBindTexture(mActiveTextureType[textureUnit], 0);
      glDisable(mActiveTextureType[textureUnit]);
      mActiveTextureType[textureUnit] = GL_ZERO;
   }
   
   glActiveTexture(GL_TEXTURE0);
>>>>>>> omni_engine
}

void GFXGLDevice::setCubemapInternal(U32 textureUnit, const GFXGLCubemap* texture)
{
<<<<<<< HEAD
   if(texture)
   {
=======
   glActiveTexture(GL_TEXTURE0 + textureUnit);
   if(texture)
   {
      if(mActiveTextureType[textureUnit] != GL_TEXTURE_CUBE_MAP && mActiveTextureType[textureUnit] != GL_ZERO)
      {
         glBindTexture(mActiveTextureType[textureUnit], 0);
         glDisable(mActiveTextureType[textureUnit]);
      }
>>>>>>> omni_engine
      mActiveTextureType[textureUnit] = GL_TEXTURE_CUBE_MAP;
      texture->bind(textureUnit);
   }
   else if(mActiveTextureType[textureUnit] != GL_ZERO)
   {
<<<<<<< HEAD
      glActiveTexture(GL_TEXTURE0 + textureUnit);
      glBindTexture(mActiveTextureType[textureUnit], 0);
      getOpenglCache()->setCacheBindedTex(textureUnit, mActiveTextureType[textureUnit], 0);
      mActiveTextureType[textureUnit] = GL_ZERO;
   }
=======
      glBindTexture(mActiveTextureType[textureUnit], 0);
      glDisable(mActiveTextureType[textureUnit]);
      mActiveTextureType[textureUnit] = GL_ZERO;
   }

   glActiveTexture(GL_TEXTURE0);
>>>>>>> omni_engine
}

void GFXGLDevice::setMatrix( GFXMatrixType mtype, const MatrixF &mat )
{
<<<<<<< HEAD
   // ONLY NEEDED ON FFP
=======
   MatrixF modelview;
   switch (mtype)
   {
      case GFXMatrixWorld :
         {
            glMatrixMode(GL_MODELVIEW);
            m_mCurrentWorld = mat;
            modelview = m_mCurrentWorld;
            modelview *= m_mCurrentView;
            modelview.transpose();
            glLoadMatrixf((F32*) modelview);
         }
         break;
      case GFXMatrixView :
         {
            glMatrixMode(GL_MODELVIEW);
            m_mCurrentView = mat;
            modelview = m_mCurrentView;
            modelview *= m_mCurrentWorld;
            modelview.transpose();
            glLoadMatrixf((F32*) modelview);
         }
         break;
      case GFXMatrixProjection :
         {        
            glMatrixMode(GL_PROJECTION);
            MatrixF t(mat);
            t.transpose();
            glLoadMatrixf((F32*) t);
            glMatrixMode(GL_MODELVIEW);
         }
         break;
      // CodeReview - Add support for texture transform matrix types
      default:
         AssertFatal(false, "GFXGLDevice::setMatrix - Unknown matrix mode!");
         return;
   }
>>>>>>> omni_engine
}

void GFXGLDevice::setClipRect( const RectI &inRect )
{
   AssertFatal(mCurrentRT.isValid(), "GFXGLDevice::setClipRect - must have a render target set to do any rendering operations!");

   // Clip the rect against the renderable size.
   Point2I size = mCurrentRT->getSize();
   RectI maxRect(Point2I(0,0), size);
   mClip = inRect;
   mClip.intersect(maxRect);

   // Create projection matrix.  See http://www.opengl.org/documentation/specs/man_pages/hardcopy/GL/html/gl/ortho.html
   const F32 left = mClip.point.x;
   const F32 right = mClip.point.x + mClip.extent.x;
   const F32 bottom = mClip.extent.y;
   const F32 top = 0.0f;
   const F32 near = 0.0f;
   const F32 far = 1.0f;
   
   const F32 tx = -(right + left)/(right - left);
   const F32 ty = -(top + bottom)/(top - bottom);
   const F32 tz = -(far + near)/(far - near);
   
   static Point4F pt;
   pt.set(2.0f / (right - left), 0.0f, 0.0f, 0.0f);
   mProjectionMatrix.setColumn(0, pt);
   
   pt.set(0.0f, 2.0f/(top - bottom), 0.0f, 0.0f);
   mProjectionMatrix.setColumn(1, pt);
   
   pt.set(0.0f, 0.0f, -2.0f/(far - near), 0.0f);
   mProjectionMatrix.setColumn(2, pt);
   
   pt.set(tx, ty, tz, 1.0f);
   mProjectionMatrix.setColumn(3, pt);
   
   // Translate projection matrix.
   static MatrixF translate(true);
   pt.set(0.0f, -mClip.point.y, 0.0f, 1.0f);
   translate.setColumn(3, pt);
   
   mProjectionMatrix *= translate;
   
   setMatrix(GFXMatrixProjection, mProjectionMatrix);
   
   MatrixF mTempMatrix(true);
   setViewMatrix( mTempMatrix );
   setWorldMatrix( mTempMatrix );

<<<<<<< HEAD
   // Set the viewport to the clip rect
   RectI viewport(mClip.point.x, mClip.point.y, mClip.extent.x, mClip.extent.y);
=======
   // Set the viewport to the clip rect (with y flip)
   RectI viewport(mClip.point.x, size.y - (mClip.point.y + mClip.extent.y), mClip.extent.x, mClip.extent.y);
>>>>>>> omni_engine
   setViewport(viewport);
}

/// Creates a state block object based on the desc passed in.  This object
/// represents an immutable state.
GFXStateBlockRef GFXGLDevice::createStateBlockInternal(const GFXStateBlockDesc& desc)
{
   return GFXStateBlockRef(new GFXGLStateBlock(desc));
}

/// Activates a stateblock
void GFXGLDevice::setStateBlockInternal(GFXStateBlock* block, bool force)
{
   AssertFatal(dynamic_cast<GFXGLStateBlock*>(block), "GFXGLDevice::setStateBlockInternal - Incorrect stateblock type for this device!");
   GFXGLStateBlock* glBlock = static_cast<GFXGLStateBlock*>(block);
   GFXGLStateBlock* glCurrent = static_cast<GFXGLStateBlock*>(mCurrentStateBlock.getPointer());
   if (force)
      glCurrent = NULL;
      
   glBlock->activate(glCurrent); // Doesn't use current yet.
   mCurrentGLStateBlock = glBlock;
}

//------------------------------------------------------------------------------

GFXTextureTarget * GFXGLDevice::allocRenderToTextureTarget()
{
   GFXGLTextureTarget *targ = new GFXGLTextureTarget();
   targ->registerResourceWithDevice(this);
   return targ;
}

GFXFence * GFXGLDevice::createFence()
{
   GFXFence* fence = _createPlatformSpecificFence();
   if(!fence)
      fence = new GFXGeneralFence( this );
      
   fence->registerResourceWithDevice(this);
   return fence;
}

GFXOcclusionQuery* GFXGLDevice::createOcclusionQuery()
{   
   GFXOcclusionQuery *query = new GFXGLOcclusionQuery( this );
   query->registerResourceWithDevice(this);
   return query;
}

void GFXGLDevice::setupGenericShaders( GenericShaderType type ) 
{
<<<<<<< HEAD
   AssertFatal(type != GSTargetRestore, "");

   if( mGenericShader[GSColor] == NULL )
   {
      ShaderData *shaderData;

      shaderData = new ShaderData();
      shaderData->setField("OGLVertexShaderFile", "shaders/common/fixedFunction/gl/colorV.glsl");
      shaderData->setField("OGLPixelShaderFile", "shaders/common/fixedFunction/gl/colorP.glsl");
      shaderData->setField("pixVersion", "2.0");
      shaderData->registerObject();
      mGenericShader[GSColor] =  shaderData->getShader();
      mGenericShaderBuffer[GSColor] = mGenericShader[GSColor]->allocConstBuffer();
      mModelViewProjSC[GSColor] = mGenericShader[GSColor]->getShaderConstHandle( "$modelView" ); 

      shaderData = new ShaderData();
      shaderData->setField("OGLVertexShaderFile", "shaders/common/fixedFunction/gl/modColorTextureV.glsl");
      shaderData->setField("OGLPixelShaderFile", "shaders/common/fixedFunction/gl/modColorTextureP.glsl");
      shaderData->setSamplerName("$diffuseMap", 0);
      shaderData->setField("pixVersion", "2.0");
      shaderData->registerObject();
      mGenericShader[GSModColorTexture] = shaderData->getShader();
      mGenericShaderBuffer[GSModColorTexture] = mGenericShader[GSModColorTexture]->allocConstBuffer();
      mModelViewProjSC[GSModColorTexture] = mGenericShader[GSModColorTexture]->getShaderConstHandle( "$modelView" ); 

      shaderData = new ShaderData();
      shaderData->setField("OGLVertexShaderFile", "shaders/common/fixedFunction/gl/addColorTextureV.glsl");
      shaderData->setField("OGLPixelShaderFile", "shaders/common/fixedFunction/gl/addColorTextureP.glsl");
      shaderData->setSamplerName("$diffuseMap", 0);
      shaderData->setField("pixVersion", "2.0");
      shaderData->registerObject();
      mGenericShader[GSAddColorTexture] = shaderData->getShader();
      mGenericShaderBuffer[GSAddColorTexture] = mGenericShader[GSAddColorTexture]->allocConstBuffer();
      mModelViewProjSC[GSAddColorTexture] = mGenericShader[GSAddColorTexture]->getShaderConstHandle( "$modelView" ); 

      shaderData = new ShaderData();
      shaderData->setField("OGLVertexShaderFile", "shaders/common/fixedFunction/gl/textureV.glsl");
      shaderData->setField("OGLPixelShaderFile", "shaders/common/fixedFunction/gl/textureP.glsl");
      shaderData->setSamplerName("$diffuseMap", 0);
      shaderData->setField("pixVersion", "2.0");
      shaderData->registerObject();
      mGenericShader[GSTexture] = shaderData->getShader();
      mGenericShaderBuffer[GSTexture] = mGenericShader[GSTexture]->allocConstBuffer();
      mModelViewProjSC[GSTexture] = mGenericShader[GSTexture]->getShaderConstHandle( "$modelView" );
   }

   MatrixF tempMatrix =  mProjectionMatrix * mViewMatrix * mWorldMatrix[mWorldStackSize];  
   mGenericShaderBuffer[type]->setSafe(mModelViewProjSC[type], tempMatrix);

   setShader( mGenericShader[type] );
   setShaderConstBuffer( mGenericShaderBuffer[type] );
}
=======
   TORQUE_UNUSED(type);
   // We have FF support, use that.
   disableShaders();
}

>>>>>>> omni_engine
GFXShader* GFXGLDevice::createShader()
{
   GFXGLShader* shader = new GFXGLShader();
   shader->registerResourceWithDevice( this );
   return shader;
}

<<<<<<< HEAD
void GFXGLDevice::setShader(GFXShader *shader, bool force)
{
   if(mCurrentShader == shader && !force)
      return;

=======
void GFXGLDevice::setShader( GFXShader *shader )
{
>>>>>>> omni_engine
   if ( shader )
   {
      GFXGLShader *glShader = static_cast<GFXGLShader*>( shader );
      glShader->useProgram();
<<<<<<< HEAD
      mCurrentShader = shader;
   }
   else
   {
      setupGenericShaders();
   }
}

void GFXGLDevice::setShaderConstBufferInternal(GFXShaderConstBuffer* buffer)
{
   static_cast<GFXGLShaderConstBuffer*>(buffer)->activate();
}

U32 GFXGLDevice::getNumSamplers() const
{
   return getMin((U32)TEXTURE_STAGE_COUNT,mPixelShaderVersion > 0.001f ? mMaxShaderTextures : mMaxFFTextures);
}

GFXTextureObject* GFXGLDevice::getDefaultDepthTex() const 
{
   if(mWindowRT && mWindowRT->getPointer())
      return static_cast<GFXGLWindowTarget*>( mWindowRT->getPointer() )->mBackBufferDepthTex.getPointer();

   return NULL;
=======
   }
   else
      glUseProgram(0);
}

void GFXGLDevice::disableShaders()
{
   setShader(NULL);
   setShaderConstBuffer( NULL );
}

void GFXGLDevice::setShaderConstBufferInternal(GFXShaderConstBuffer* buffer)
{
   static_cast<GFXGLShaderConstBuffer*>(buffer)->activate();
}

U32 GFXGLDevice::getNumSamplers() const
{
   return mPixelShaderVersion > 0.001f ? mMaxShaderTextures : mMaxFFTextures;
>>>>>>> omni_engine
}

U32 GFXGLDevice::getNumRenderTargets() const 
{ 
<<<<<<< HEAD
   return mMaxTRColors; 
=======
   return 1; 
>>>>>>> omni_engine
}

void GFXGLDevice::_updateRenderTargets()
{
   if ( mRTDirty || mCurrentRT->isPendingState() )
   {
      if ( mRTDeactivate )
      {
         mRTDeactivate->deactivate();
         mRTDeactivate = NULL;   
      }
      
      // NOTE: The render target changes is not really accurate
      // as the GFXTextureTarget supports MRT internally.  So when
      // we activate a GFXTarget it could result in multiple calls
      // to SetRenderTarget on the actual device.
      mDeviceStatistics.mRenderTargetChanges++;

      GFXGLTextureTarget *tex = dynamic_cast<GFXGLTextureTarget*>( mCurrentRT.getPointer() );
      if ( tex )
      {
         tex->applyState();
         tex->makeActive();
      }
      else
      {
         GFXGLWindowTarget *win = dynamic_cast<GFXGLWindowTarget*>( mCurrentRT.getPointer() );
         AssertFatal( win != NULL, 
                     "GFXGLDevice::_updateRenderTargets() - invalid target subclass passed!" );
         
         win->makeActive();
         
         if( win->mContext != static_cast<GFXGLDevice*>(GFX)->mContext )
         {
            mRTDirty = false;
            GFX->updateStates(true);
         }
      }
      
      mRTDirty = false;
   }
   
   if ( mViewportDirty )
   {
      glViewport( mViewport.point.x, mViewport.point.y, mViewport.extent.x, mViewport.extent.y ); 
      mViewportDirty = false;
   }
}

GFXFormat GFXGLDevice::selectSupportedFormat(   GFXTextureProfile* profile, 
                                                const Vector<GFXFormat>& formats, 
                                                bool texture, 
                                                bool mustblend,
                                                bool mustfilter )
{
   for(U32 i = 0; i < formats.size(); i++)
   {
      // Single channel textures are not supported by FBOs.
      if(profile->testFlag(GFXTextureProfile::RenderTarget) && (formats[i] == GFXFormatA8 || formats[i] == GFXFormatL8 || formats[i] == GFXFormatL16))
         continue;
      if(GFXGLTextureInternalFormat[formats[i]] == GL_ZERO)
         continue;
      
      return formats[i];
   }
   
   return GFXFormatR8G8B8A8;
}

U32 GFXGLDevice::getTotalVideoMemory_GL_EXT()
{
   // Source: http://www.opengl.org/registry/specs/ATI/meminfo.txt
   if( gglHasExtension(ATI_meminfo) )
   {
      GLint mem[4] = {0};
      glGetIntegerv(GL_TEXTURE_FREE_MEMORY_ATI, mem);  // Retrieve the texture pool
      
      /* With mem[0] i get only the total memory free in the pool in KB
      *
      * mem[0] - total memory free in the pool
      * mem[1] - largest available free block in the pool
      * mem[2] - total auxiliary memory free
      * mem[3] - largest auxiliary free block
      */

      return  mem[0] / 1024;
   }
   
   //source http://www.opengl.org/registry/specs/NVX/gpu_memory_info.txt
   else if( gglHasExtension(NVX_gpu_memory_info) )
   {
      GLint mem = 0;
      glGetIntegerv(GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX, &mem);
      return mem / 1024;
   }

   // TODO OPENGL, add supprt for INTEL cards.
   
   return 0;
}

//
// Register this device with GFXInit
//
class GFXGLRegisterDevice
{
public:
   GFXGLRegisterDevice()
   {
      GFXInit::getRegisterDeviceSignal().notify(&GFXGLDevice::enumerateAdapters);
   }
};

static GFXGLRegisterDevice pGLRegisterDevice;

ConsoleFunction(cycleResources, void, 1, 1, "")
{
   static_cast<GFXGLDevice*>(GFX)->zombify();
   static_cast<GFXGLDevice*>(GFX)->resurrect();
}
