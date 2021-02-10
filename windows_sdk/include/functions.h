#ifndef MRTCOREEX_FUNCTIONS_H
#define MRTCOREEX_FUNCTIONS_H

#include "wtypesbase.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef PVOID SRWLOCK;
extern void AcquireSRWLockExclusive(SRWLOCK lock);
extern void ReleaseSRWLockExclusive(SRWLOCK lock);
extern void AcquireSRWLockShared(SRWLOCK lock);
extern void ReleaseSRWLockShared(SRWLOCK lock);

typedef PVOID PMEMORY_BASIC_INFORMATION;

#ifdef __cplusplus
}
#endif

#endif /* MRTCOREEX_FUNCTIONS_H */
