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

#include "platformX86UNIX/platformX86UNIX.h"
#include "platform/threads/semaphore.h"
<<<<<<< HEAD
// Instead of that mess that was here before, lets use the SDL lib to deal
// with the semaphores.

#include <SDL.h>
#include <SDL_thread.h>

struct PlatformSemaphore
{
   SDL_sem *semaphore;

   PlatformSemaphore(S32 initialCount)
   {
       semaphore = SDL_CreateSemaphore(initialCount);
       AssertFatal(semaphore, "PlatformSemaphore constructor - Failed to create SDL Semaphore.");
=======
#include <unistd.h>     
#include <sys/types.h>  
#include <errno.h>      
#include <semaphore.h> 
#include <time.h>

struct PlatformSemaphore
{
   sem_t semaphore;
   bool initialized;

   PlatformSemaphore(S32 initialCount)
   {
	   initialized = true;
	   if (sem_init(&semaphore, 0, initialCount) == -1) {
		   initialized = false;
			AssertFatal(0, "PlatformSemaphore constructor - Failed to create Semaphore.");
	   } 
>>>>>>> omni_engine
   }

   ~PlatformSemaphore()
   {
<<<<<<< HEAD
       SDL_DestroySemaphore(semaphore);
=======
       sem_destroy(&semaphore);
	   initialized = false;
>>>>>>> omni_engine
   }
};

Semaphore::Semaphore(S32 initialCount)
{
  mData = new PlatformSemaphore(initialCount);
}

Semaphore::~Semaphore()
{
  AssertFatal(mData, "Semaphore destructor - Invalid semaphore.");
  delete mData;
}

bool Semaphore::acquire(bool block, S32 timeoutMS)
{
<<<<<<< HEAD
   AssertFatal(mData && mData->semaphore, "Semaphore::acquire - Invalid semaphore.");
   if (block)
   {
=======
   AssertFatal(mData && mData->initialized, "Semaphore::acquire - Invalid semaphore.");
   if (block)
   {
      //SDL was removed so I do not now if this still holds true or not with OS calls but my guess is they are used underneath SDL anyway 
>>>>>>> omni_engine
      // Semaphore acquiring is different from the MacOS/Win realization because SDL_SemWaitTimeout() with "infinite" timeout can be too heavy on some platforms.
      // (see "man SDL_SemWaitTimeout(3)" for more info)
      // "man" states to avoid the use of SDL_SemWaitTimeout at all, but at current stage this looks like a valid and working solution, so keeping it this way.
      // [bank / Feb-2010]
      if (timeoutMS == -1)
      {
<<<<<<< HEAD
         if (SDL_SemWait(mData->semaphore) < 0)
            AssertFatal(false, "Semaphore::acquie - Wait failed.");
      }
      else
      {
         if (SDL_SemWaitTimeout(mData->semaphore, timeoutMS) < 0)
            AssertFatal(false, "Semaphore::acquie - Wait with timeout failed.");
=======
         if (sem_wait(&mData->semaphore) < 0)
            AssertFatal(false, "Semaphore::acquire - Wait failed.");
      }
      else
      {
	     //convert timeoutMS to timespec
         timespec ts;
		 if (clock_gettime(CLOCK_REALTIME, &ts) == -1) {
			 AssertFatal(false, "Semaphore::acquire - clock_realtime failed.");
		 }
		 ts.tv_sec += timeoutMS / 1000;
		 ts.tv_nsec += (timeoutMS % 1000) * 1000;

         if (sem_timedwait(&mData->semaphore, &ts) < 0)
            AssertFatal(false, "Semaphore::acquire - Wait with timeout failed.");
>>>>>>> omni_engine
      }
      return (true);
   }
   else
   {
<<<<<<< HEAD
      int res = SDL_SemTryWait(mData->semaphore);
=======
      int res = sem_trywait(&mData->semaphore);
>>>>>>> omni_engine
      return (res == 0);
   }
}

void Semaphore::release()
{
   AssertFatal(mData, "Semaphore::releaseSemaphore - Invalid semaphore.");
<<<<<<< HEAD
   SDL_SemPost(mData->semaphore);
=======
   sem_post(&mData->semaphore);
>>>>>>> omni_engine
}
