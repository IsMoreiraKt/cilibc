/**
 * @file arch/x86_64/bits/stddef.h
 * @brief Standard definitions for x86_64 architecture.
 * 
 * This header file provides standard definitions and types used in CILibc
 * for the x86_64 architecture. It includes definitions for size_t, ptrdiff_t
 * and other standard types.
 * 
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stddef.h
 * 
 * @author Ismael Moreira
 */
#ifndef __CILIBC__X86_64__STANDARD_DEFINITIONS__
#define __CILIBC__X86_64__STANDARD_DEFINITIONS__

#include "stdint.h"

/**
 * @typedef ptrdiff_t
 * @brief Signed integer type for the result of subtracting two pointers.
 */
typedef _Int64 ptrdiff_t;

#endif // __CILIBC__X86_64__STANDARD_DEFINITIONS__
