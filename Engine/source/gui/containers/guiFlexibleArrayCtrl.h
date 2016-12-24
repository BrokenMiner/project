#include "torqueConfig.h"
#ifdef TORQUE_WALKABOUT_EXTRAS_ENABLED
//-----------------------------------------------------------------------------
// Copyright (c) 2012 Daniel Buckmaster
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

#ifndef _GUIFLEXIBLEARRAYCTRL_H_
#define _GUIFLEXIBLEARRAYCTRL_H_

#include "gui/core/guiControl.h"

class GuiFlexibleArrayControl : public GuiControl
{
   typedef GuiControl Parent;

public:

   GuiFlexibleArrayControl();
   virtual ~GuiFlexibleArrayControl();

   DECLARE_CONOBJECT(GuiFlexibleArrayControl);
   DECLARE_CATEGORY( "Gui Containers" );

   // ConsoleObject
   static void initPersistFields();

   // SimObject
   void inspectPostApply();

   // SimSet
   void addObject(SimObject *obj);

   // GuiControl
   bool resize(const Point2I &newPosition, const Point2I &newExtent);
   void childResized(GuiControl *child);

   // GuiFlexibleArrayCtrl
   void refresh();

protected:

   S32 mRows;
   S32 mRowSpacing;
   S32 mColSpacing;
   bool mResizing;
   bool mFrozen;

   RectSpacingI mPadding;
};

#endif // _GUIFLEXIBLEARRAYCTRL_H_

#endif // TORQUE_WALKABOUT_EXTRAS_ENABLED
