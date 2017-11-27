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

#ifndef _ENGINESTRUCTS_H_
#define _ENGINESTRUCTS_H_

#ifndef _ENGINETYPES_H_
   #include "console/engineTypes.h"
#endif


/// @file
/// Definitions for the core engine structured types.


template< typename T > class Vector;
namespace Torque {
   class UUID;
}

class ColorI;
class ColorF;


<<<<<<< HEAD
DECLARE_STRUCT_R(Vector< bool >);
DECLARE_STRUCT_R(Vector< S32 >);
DECLARE_STRUCT_R(Vector< F32 >);
DECLARE_STRUCT_R(Torque::UUID);
DECLARE_STRUCT_R(ColorI);
DECLARE_STRUCT_R(ColorF);
=======
DECLARE_STRUCT( Vector< bool > );
DECLARE_STRUCT( Vector< S32 > );
DECLARE_STRUCT( Vector< F32 > );
DECLARE_STRUCT( Torque::UUID );
DECLARE_STRUCT( ColorI );
DECLARE_STRUCT( ColorF );
>>>>>>> omni_engine

#endif // !_ENGINESTRUCTS_H_