// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#ifndef STRSAFE_NO_CB_FUNCTIONS
#define STRSAFE_NO_CB_FUNCTIONS
#endif

#include <windows.h>

#include <stdlib.h>
#include <errno.h>
#include <strsafe.h>
#include <intsafe.h>

#define _DefSendNotifyMessage(A, B, C, D)
#define _DefRegisterWindowMessage(A)
typedef BOOL __BOOL;

#ifdef __cplusplus
#include <new>

// kensy: The old Windows copy of yvals.h (pulled in through <new>) disabled several warnings that
//        the new version leaves enabled. To maintain parity with old code this warning
//        will continue to be disabled.  A better fix would be to address all the mismatches but
//        that is outside the scope of Unified CRT conversion work.
#pragma warning(disable : 4018) // '<' : signed/unsigned mismatch
#pragma warning(disable : 4244) // '=' : conversion from 'foo' to 'bar', possible loss of data
#pragma warning(disable : 4245) // 'initializing' : conversion from 'int' to 'unsigned int', signed/unsigned mismatch

extern "C"
{
#endif

    HRESULT ErrnoToHResult(__in errno_t err);

#ifdef __cplusplus
}
#endif

#define Def_ErrnoFailed(WHAT, WHO, STATUS) Def_Check(((WHAT) != 0), TO_S(WHO), ErrnoToHResult(WHAT), (STATUS))

#define Def_HrFailed(WHAT, WHO, STATUS) Def_Check(FAILED(WHAT), TO_S(WHO), (WHAT), (STATUS))

/*
 * Define platform-specific assert
 */

#define DEF_PLATFORM_ASSERT(WHAT)

/*
 * Platform specific allocators
 */
#define _DefPlatformAlloc(SZ) malloc(SZ)
#define _DefPlatformAllocZeroed(SZ) calloc(1, SZ)
#define _DefPlatformFree(PTR) free(PTR)

// Memory manipulation
#define _DefZeroMemory SecureZeroMemory

// Intsafe functions
#define _DefSizeTToInt SizeTToInt
#define _DefSizeTMult SizeTMult

// Strsafe functions
#define _DEF_STRSAFE_MAX_CCH STRSAFE_MAX_CCH
#define _DefStringCchLength StringCchLengthW
#define _DefStringCchCopy StringCchCopyW
#define _DefStringCchCat StringCchCatW
#define _DefStringCchCatEx StringCchCatExW
#define _DefStringCchPrintf StringCchPrintfW

// Locking
#define _DEF_SRWLOCK SRWLOCK

#define _DefInitializeSRWLock InitializeSRWLock
#define _DefAcquireSRWLockExclusive AcquireSRWLockExclusive
#define _DefAcquireSRWLockShared AcquireSRWLockShared
#define _DefReleaseSRWLockExclusive ReleaseSRWLockExclusive
#define _DefReleaseSRWLockShared ReleaseSRWLockShared

#define TOWIDE2(x) L##x
#define TOWIDE(x) TOWIDE2(x)

// No TraceLogging cause cross-platform
#define WRITE_MRMMIN_INIT_TRACE_INFO(msg, hr)
#define WRITE_MRMMIN_INIT_TRACE_INFO_CHECK(msg, hr)
#define WRITE_MRMMIN_INIT_TRACE_ERROR(msg, hr)
#define WRITE_MRMMIN_INIT_TRACE_ERROR_CHECK(msg, hr)
#define WRITE_MRMMIN_INIT_TRACE_ERROR_MEASURE(msg, hr)
#define WRITE_MRMMIN_INIT_TRACE_ERROR_MEASURE_CHECK(msg, hr)

#define WRITE_MRMMIN_TRACE_INFO(msg, msg2, hr)
#define WRITE_MRMMIN_TRACE_WARNING(msg, msg2, hr)
#define WRITE_MRMMIN_TRACE_WARNING_CHECK(msg, msg2, hr)
#define WRITE_MRMMIN_TRACE_ERROR(msg, msg2, hr)
#define WRITE_MRMMIN_TRACE_ERROR_MEASURE(msg, msg2, hr)
#define WRITE_MRMMIN_TRACE_ERROR_MEASURE_CHECK(msg, msg2, hr)

#define WRITE_MRMMIN_PRI_MERGE_INFO(mergeState, mergeInfo, result)
#define WRITE_MRMMIN_PRI_MERGE_ERROR(mergeState, mergeInfo, result)

#define WRITE_MRMMIN_UNABLE_TO_OPEN_OVERLAY_FILE(overlayFileName, result)

#define WRITE_ETW(etw)
