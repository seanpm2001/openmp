/*
 * kmp_ftn_stdcall.c -- Fortran __stdcall linkage support for OpenMP.
 * $Revision: 42061 $
 * $Date: 2013-02-28 16:36:24 -0600 (Thu, 28 Feb 2013) $
 */


//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.txt for details.
//
//===----------------------------------------------------------------------===//


#include "kmp.h"

// Note: This string is not printed when KMP_VERSION=1.
char const __kmp_version_ftnstdcall[] = KMP_VERSION_PREFIX "Fortran __stdcall OMP support: "
#ifdef USE_FTN_STDCALL
    "yes";
#else
    "no";
#endif

#ifdef USE_FTN_STDCALL

#define FTN_STDCALL 	KMP_STDCALL
#define KMP_FTN_ENTRIES	USE_FTN_STDCALL

#include "kmp_ftn_os.h"
#include "kmp_ftn_entry.h"

#endif /* USE_FTN_STDCALL */
