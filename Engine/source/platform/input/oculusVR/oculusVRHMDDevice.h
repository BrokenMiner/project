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

#ifndef _OCULUSVRHMDDEVICE_H_
#define _OCULUSVRHMDDEVICE_H_

#include "core/util/str.h"
#include "math/mQuat.h"
#include "math/mPoint2.h"
#include "math/mPoint3.h"
#include "math/mPoint4.h"
#include "platform/input/oculusVR/oculusVRConstants.h"
#include "platform/types.h"
<<<<<<< HEAD
#include "gfx/gfxTextureHandle.h"
#include "math/mRect.h"
#include "gfx/gfxDevice.h"

#include "OVR_CAPI_0_5_0.h"

class GuiCanvas;
class GameConnection;
struct DisplayPose;
class OculusVRSensorDevice;
=======
#include "OVR.h"
>>>>>>> omni_engine

class OculusVRHMDDevice
{
public:
   enum SimulationTypes {
      ST_RIFT_PREVIEW,
   };

protected:
   bool mIsValid;

<<<<<<< HEAD
   bool mVsync;
   bool mTimewarp;

   bool mRenderConfigurationDirty;
   bool mFrameReady;

   ovrHmd mDevice;

   U32 mSupportedDistortionCaps;
   U32 mCurrentDistortionCaps;

   U32 mSupportedCaps;
   U32 mCurrentCaps;
=======
   bool mIsSimulation;

   OVR::HMDDevice* mDevice;
>>>>>>> omni_engine

   // From OVR::DeviceInfo
   String   mProductName;
   String   mManufacturer;
   U32      mVersion;

   // Windows display device name used in EnumDisplaySettings/CreateDC
   String   mDisplayDeviceName;

   // MacOS display ID
   S32      mDisplayId;

   // Desktop coordinate position of the screen (can be negative; may not be present on all platforms)
   Point2I  mDesktopPosition;

   // Whole screen resolution
   Point2I  mResolution;

   // Physical screen size in meters
   Point2F  mScreenSize;

   // Physical offset from the top of the screen to the center of the
   // eye, in meters.  Usually half of the vertical physical screen size
   F32      mVerticalEyeCenter;

   // Physical distance from the eye to the screen
   F32      mEyeToScreen;

   // Physical distance between lens centers, in meters
   F32      mLensSeparation;

   // Physical distance between the user's eye centers as defined in the current profile
   F32      mProfileInterpupillaryDistance;

   // Physical distance between the user's eye centers
   F32      mInterpupillaryDistance;

<<<<<<< HEAD
   // The amount to offset the projection matrix to account for the eye not being in the
   // center of the screen.
   Point2F mProjectionCenterOffset;

   // Current pose of eyes
   ovrPosef         mCurrentEyePoses[2];
   ovrEyeRenderDesc mEyeRenderDesc[2];

   ovrFovPort mCurrentFovPorts[2];

   Point2I mWindowSize;

   GameConnection *mConnection;

   OculusVRSensorDevice *mSensor;
   U32 mActionCodeIndex;

protected:
   void updateRenderInfo();
=======
   // The eye IPD as a Point3F
   Point3F  mEyeWorldOffset;

   // Radial distortion correction coefficients used by the barrel distortion shader
   Point4F  mKDistortion;

   // Chromatic aberration correction coefficients
   Point4F mChromaticAbCorrection;

   // Calculated values of eye x offset from center in normalized (uv) coordinates
   // where each eye is 0..1.  Used for the mono to stereo postFX to simulate an
   // eye offset of the camera.  The x component is the left eye, the y component
   // is the right eye.
   Point2F mEyeUVOffset;

   // Used to adjust where an eye's view is rendered to account for the lenses not
   // being in the center of the physical screen half.
   F32 mXCenterOffset;

   // When calculating the distortion scale to use to increase the size of the input texture
   // this determines how we should attempt to fit the distorted view into the backbuffer.
   Point2F mDistortionFit;

   // Is the factor by which the input texture size is increased to make post-distortion
   // result distortion fit the viewport.  If the input texture is the same size as the
   // backbuffer, then this should be 1.0.
   F32 mDistortionScale;

   // Aspect ratio for a single eye
   F32 mAspectRatio;

   // Vertical field of view
   F32 mYFOV;

   // The amount to offset the projection matrix to account for the eye not being in the
   // center of the screen.
   Point2F mProjectionCenterOffset;

protected:
   F32 calcScale(F32 fitRadius);

   void calculateValues(bool calculateDistortionScale);

   void createSimulatedPreviewRift(bool calculateDistortionScale);
>>>>>>> omni_engine

public:
   OculusVRHMDDevice();
   ~OculusVRHMDDevice();

   void cleanUp();

   // Set the HMD properties based on information from the OVR device
<<<<<<< HEAD
   void set(ovrHmd hmd, U32 actionCodeIndex);

   // Sets optimal display size for canvas
   void setOptimalDisplaySize(GuiCanvas *canvas);

   bool isValid() const {return mIsValid;}
=======
   void set(OVR::HMDDevice* hmd, OVR::HMDInfo& info, bool calculateDistortionScale);

   // Set the HMD properties based on a simulation of the given type
   void createSimulation(SimulationTypes simulationType, bool calculateDistortionScale);

   bool isValid() const {return mIsValid;}
   bool isSimulated() const {return mIsSimulation;}
>>>>>>> omni_engine

   const char* getProductName() const { return mProductName.c_str(); }
   const char* getManufacturer() const { return mManufacturer.c_str(); }
   U32 getVersion() const { return mVersion; }

   // Windows display device name used in EnumDisplaySettings/CreateDC
   const char* getDisplayDeviceName() const { return mDisplayDeviceName.c_str(); }

   // MacOS display ID
   S32 getDisplayDeviceId() const { return mDisplayId; }

   // Desktop coordinate position of the screen (can be negative; may not be present on all platforms)
   const Point2I& getDesktopPosition() const { return mDesktopPosition; }

   // Whole screen resolution
   const Point2I& getResolution() const { return mResolution; }

   // Physical screen size in meters
   const Point2F& getScreenSize() const { return mScreenSize; }

   // Physical offset from the top of the screen to the center of the
   // eye, in meters.  Usually half of the vertical physical screen size
   F32 getVerticalEyeCenter() const { return mVerticalEyeCenter; }

   // Physical distance from the eye to the screen
   F32 getEyeToScreen() const { return mEyeToScreen; }

   // Physical distance between lens centers, in meters
   F32 getLensSeparation() const { return mLensSeparation; }

   // Physical distance between the user's eye centers as defined by the current profile
   F32 getProfileIPD() const { return mProfileInterpupillaryDistance; }

   // Physical distance between the user's eye centers
   F32 getIPD() const { return mInterpupillaryDistance; }

   // Set a new physical distance between the user's eye centers
<<<<<<< HEAD
   void setIPD(F32 ipd);

   // The amount to offset the projection matrix to account for the eye not being in the
   // center of the screen.
   const Point2F& getProjectionCenterOffset() const { return mProjectionCenterOffset; }
   
   void getStereoViewports(RectI *dest) const { dMemcpy(dest, mEyeViewport, sizeof(mEyeViewport)); }
   void getStereoTargets(GFXTextureTarget **dest) const { dest[0] = mEyeRT[0]; dest[1] = mEyeRT[1]; }

   void getFovPorts(FovPort *dest) const { dMemcpy(dest, mCurrentFovPorts, sizeof(mCurrentFovPorts)); }
   
   /// Returns eye offsets in torque coordinate space, i.e. z being up, x being left-right, and y being depth (forward).
   void getEyeOffsets(Point3F *offsets) const { 
      offsets[0] = Point3F(-mEyeRenderDesc[0].HmdToEyeViewOffset.x, mEyeRenderDesc[0].HmdToEyeViewOffset.z, -mEyeRenderDesc[0].HmdToEyeViewOffset.y); 
      offsets[1] = Point3F(-mEyeRenderDesc[1].HmdToEyeViewOffset.x, mEyeRenderDesc[1].HmdToEyeViewOffset.z, -mEyeRenderDesc[1].HmdToEyeViewOffset.y); }

   void getFrameEyePose(DisplayPose *outPose, U32 eyeId) const;

   void updateCaps();

   void onStartFrame();
   void onEndFrame();
   void onDeviceDestroy();

   Point2I generateRenderTarget(GFXTextureTargetRef &target, GFXTexHandle &texture, GFXTexHandle &depth, Point2I desiredSize);
   void clearRenderTargets();

   bool isDisplayingWarning();
   void dismissWarning();

   bool setupTargets();

   /// Designates canvas we are drawing to. Also updates render targets
   void setDrawCanvas(GuiCanvas *canvas) { if (mDrawCanvas != canvas) { mDrawCanvas = canvas; } updateRenderInfo(); }

   virtual void setCurrentConnection(GameConnection *connection) { mConnection = connection; }
   virtual GameConnection* getCurrentConnection() { return mConnection; }

   String dumpMetrics();

   // Stereo RT
   GFXTexHandle mStereoTexture;
   GFXTexHandle mStereoDepthTexture;
   GFXTextureTargetRef mStereoRT;

   // Eye RTs (if we are using separate targets)
   GFXTextureTargetRef mEyeRT[2];
   GFXTexHandle mEyeTexture[2];
   GFXTexHandle mEyeDepthTexture[2];

   // Current render target size for each eye
   Point2I mEyeRenderSize[2];

   // Recommended eye target size for each eye
   ovrSizei mRecomendedEyeTargetSize[2];

   // Desired viewport for each eye
   RectI mEyeViewport[2];

   F32 mCurrentPixelDensity;
   F32 smDesiredPixelDensity;

   ovrTrackingState mLastTrackingState;

   GFXDevice::GFXDeviceRenderStyles mDesiredRenderingMode;

   GFXFormat mRTFormat;

   // Canvas we should be drawing
   GuiCanvas *mDrawCanvas;

   OculusVRSensorDevice *getSensorDevice() { return mSensor; }
=======
   void setIPD(F32 ipd, bool calculateDistortionScale);

   // Provides the IPD of one eye as a Point3F
   const Point3F& getEyeWorldOffset() const { return mEyeWorldOffset; }

   // Radial distortion correction coefficients used by the barrel distortion shader
   const Point4F& getKDistortion() const { return mKDistortion; }

   // Chromatic aberration correction coefficients used by the barrel distortion shader
   const Point4F& getChromaticAbCorrection() const { return mChromaticAbCorrection; }

   // Calculated values of eye x offset from center in normalized (uv) coordinates.
   const Point2F& getEyeUVOffset() const { return mEyeUVOffset; }

   // Used to adjust where an eye's view is rendered to account for the lenses not
   // being in the center of the physical screen half.
   F32 getCenterOffset() const { return mXCenterOffset; }

   // Is the factor by which the input texture size is increased to make post-distortion
   // result distortion fit the viewport.
   F32 getDistortionScale() const { return mDistortionScale; }

   // Aspect ration for a single eye
   F32 getAspectRation() const { return mAspectRatio; }

   // Vertical field of view
   F32 getYFOV() const { return mYFOV; }

   // The amount to offset the projection matrix to account for the eye not being in the
   // center of the screen.
   const Point2F& getProjectionCenterOffset() const { return mProjectionCenterOffset; }
>>>>>>> omni_engine
};

#endif   // _OCULUSVRHMDDEVICE_H_
