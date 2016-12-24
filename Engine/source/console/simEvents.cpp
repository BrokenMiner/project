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

#include "console/console.h"
#include "console/consoleInternal.h"
#include "platform/threads/semaphore.h"
#include "console/simEvents.h"

// Stupid globals not declared in a header
extern ExprEvalState gEvalState;

<<<<<<< HEAD
SimConsoleEvent::SimConsoleEvent(S32 argc, ConsoleValueRef *argv, bool onObject)
{
   mOnObject = onObject;
   mArgc = argc;

   mArgv = new ConsoleValueRef[argc];
   for (int i=0; i<argc; i++)
   {
      mArgv[i].value = new ConsoleValue();
      mArgv[i].value->type = ConsoleValue::TypeInternalString;
      mArgv[i].value->init();
	  if (argv)
	  {
		mArgv[i].value->setStringValue((const char*)argv[i]);
	  }
=======
SimConsoleEvent::SimConsoleEvent(S32 argc, const char **argv, bool onObject)
{
   mOnObject = onObject;
   mArgc = argc;
   U64 totalSize = 0;
   S32 i;
   for(i = 0; i < argc; i++)
      totalSize += dStrlen(argv[i]) + 1;
   totalSize += sizeof(char *) * argc;

   mArgv = (char **) dMalloc(totalSize);
   char *argBase = (char *) &mArgv[argc];

   for(i = 0; i < argc; i++)
   {
      mArgv[i] = argBase;
      dStrcpy(mArgv[i], argv[i]);
      argBase += dStrlen(argv[i]) + 1;
>>>>>>> omni_engine
   }
}

SimConsoleEvent::~SimConsoleEvent()
{
<<<<<<< HEAD
   for (int i=0; i<mArgc; i++)
   {
      delete mArgv[i].value;
   }
   delete[] mArgv;
=======
   dFree(mArgv);
>>>>>>> omni_engine
}

void SimConsoleEvent::process(SimObject* object)
{
   // #ifdef DEBUG
   //    Con::printf("Executing schedule: %d", sequenceCount);
   // #endif
   if(mOnObject)
<<<<<<< HEAD
      Con::execute(object, mArgc, mArgv );
=======
      Con::execute(object, mArgc, const_cast<const char**>( mArgv ));
>>>>>>> omni_engine
   else
   {
      // Grab the function name. If '::' doesn't exist, then the schedule is
      // on a global function.
<<<<<<< HEAD
      char funcName[256];
      dStrncpy(funcName, (const char*)mArgv[0], 256);
      char* func = dStrstr( funcName, (char*)"::" );
=======
      char* func = dStrstr( mArgv[0], (char*)"::" );
>>>>>>> omni_engine
      if( func )
      {
         // Set the first colon to NULL, so we can reference the namespace.
         // This is okay because events are deleted immediately after
         // processing. Maybe a bad idea anyway?
         func[0] = '\0';

         // Move the pointer forward to the function name.
         func += 2;

         // Lookup the namespace and function entry.
<<<<<<< HEAD
         Namespace* ns = Namespace::find( StringTable->insert( funcName ) );
=======
         Namespace* ns = Namespace::find( StringTable->insert( mArgv[0] ) );
>>>>>>> omni_engine
         if( ns )
         {
            Namespace::Entry* nse = ns->lookup( StringTable->insert( func ) );
            if( nse )
               // Execute.
<<<<<<< HEAD
               nse->execute( mArgc, mArgv, &gEvalState );
=======
               nse->execute( mArgc, (const char**)mArgv, &gEvalState );
>>>>>>> omni_engine
         }
      }

      else
<<<<<<< HEAD
         Con::execute(mArgc, mArgv );
   }
}

void SimConsoleEvent::populateArgs(ConsoleValueRef *argv)
{
   for (U32 i=0; i<mArgc; i++)
   {
      argv[i].value = mArgv[i].value;
=======
         Con::execute(mArgc, const_cast<const char**>( mArgv ));
>>>>>>> omni_engine
   }
}

//-----------------------------------------------------------------------------

<<<<<<< HEAD
SimConsoleThreadExecCallback::SimConsoleThreadExecCallback()
{
   retVal.value = NULL;
=======
SimConsoleThreadExecCallback::SimConsoleThreadExecCallback() : retVal(NULL)
{
>>>>>>> omni_engine
   sem = new Semaphore(0);
}

SimConsoleThreadExecCallback::~SimConsoleThreadExecCallback()
{
   delete sem;
}

<<<<<<< HEAD
void SimConsoleThreadExecCallback::handleCallback(ConsoleValueRef ret)
=======
void SimConsoleThreadExecCallback::handleCallback(const char *ret)
>>>>>>> omni_engine
{
   retVal = ret;
   sem->release();
}

<<<<<<< HEAD
ConsoleValueRef SimConsoleThreadExecCallback::waitForResult()
=======
const char *SimConsoleThreadExecCallback::waitForResult()
>>>>>>> omni_engine
{
   if(sem->acquire(true))
   {
      return retVal;
   }

<<<<<<< HEAD
   return ConsoleValueRef();
=======
   return NULL;
>>>>>>> omni_engine
}

//-----------------------------------------------------------------------------

<<<<<<< HEAD
SimConsoleThreadExecEvent::SimConsoleThreadExecEvent(S32 argc, ConsoleValueRef *argv, bool onObject, SimConsoleThreadExecCallback *callback) :
=======
SimConsoleThreadExecEvent::SimConsoleThreadExecEvent(S32 argc, const char **argv, bool onObject, SimConsoleThreadExecCallback *callback) :
>>>>>>> omni_engine
   SimConsoleEvent(argc, argv, onObject), cb(callback)
{
}

void SimConsoleThreadExecEvent::process(SimObject* object)
{
<<<<<<< HEAD
   ConsoleValueRef retVal;
   if(mOnObject)
      retVal = Con::execute(object, mArgc, mArgv);
   else
      retVal = Con::execute(mArgc, mArgv);
=======
   const char *retVal;
   if(mOnObject)
      retVal = Con::execute(object, mArgc, const_cast<const char**>( mArgv ));
   else
      retVal = Con::execute(mArgc, const_cast<const char**>( mArgv ));
>>>>>>> omni_engine

   if(cb)
      cb->handleCallback(retVal);
}
