/* FPU control word definitions.  PowerPC and PowerPC e500 versions.
   Copyright (C) 1996, 1997, 1998, 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   e500 parts contributed by Aldy Hernandez <aldy@redhat.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _FPU_CONTROL_H
#define _FPU_CONTROL_H

#include <features.h>

/* rounding control */
#define _FPU_RC_NEAREST 0x00   /* RECOMMENDED */
#define _FPU_RC_DOWN    0x03
#define _FPU_RC_UP      0x02
#define _FPU_RC_ZERO    0x01

#define _FPU_MASK_NI  0x04 /* non-ieee mode */

/* masking of interrupts */
#define _FPU_MASK_ZM  0x10 /* zero divide */
#define _FPU_MASK_OM  0x40 /* overflow */
#define _FPU_MASK_UM  0x20 /* underflow */
#define _FPU_MASK_XM  0x08 /* inexact */
#define _FPU_MASK_IM  0x80 /* invalid operation */


/* The fdlibm code requires no interrupts for exceptions.  */
#define _FPU_DEFAULT  0x00000000 /* Default value.  */


/* Type of the control word.  */
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__SI__)));


#define _FPU_RESERVED 0xff3fff7f /* These bits are reserved are not changed. */
/* IEEE:  same as above, but (some) exceptions;
   we leave the 'inexact' exception off.
 */
#define _FPU_IEEE     0x000003c0

/* Macros for accessing the hardware control word.  */
#define _FPU_GETCW(__cw) ({ \
  unsigned int env; \
  __asm__ __volatile__ ("mfspefscr %0" : "=r" (env)); \
  (__cw) = env; })
#define _FPU_SETCW(__cw) ({ \
  unsigned int env = __cw; \
  __asm__ __volatile__ ("mtspefscr %0" : : "r" (env)); })

#if 0
/* Default control word set at startup.  */
extern fpu_control_t __fpu_control;
#endif

#endif /* _FPU_CONTROL_H */
