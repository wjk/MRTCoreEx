// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "stdafx.h"
#include <mrm/platform/MrmWnf.h>
#include <mrm/platform/MrmWnfHelpers.h>

UINT64
MrmWnf_GetNow()
{
    FILETIME ft;
    ULARGE_INTEGER ull;
    GetSystemTimeAsFileTime(&ft);
    ull.LowPart = ft.dwLowDateTime;
    ull.HighPart = ft.dwHighDateTime;
    return ull.QuadPart;
}
