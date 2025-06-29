/**
 * @file include/stddef.h
 * @brief Standard definitions for CILibc.
 *
 * This header file provides standard definitions and types used in CILibc.
 * It includes definitions for size_t, ptrdiff_t, and other standard types.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see arch/__your_arch__/bits/stddef.h
 *
 * @author Ismael Moreira
 */
#ifndef __CILIBC__STANDARD_DEFINITIONS__
#define __CILIBC__STANDARD_DEFINITIONS__

#include "stdint.h"

#if defined(__x86_64__)
#include "x86_64/bits/stddef.h"
#endif // defined(__x86_64__)

#if __cplusplus > 201103L
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL nullptr
#elif defined(__cplusplus)
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL 0L
#else // C
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL ((void*)0)
#endif // C

#ifndef __cplusplus
#if defined(__STDC_MB_MIGHT_NEQ_WC__)
/**
 * @typedef wchar_t
 * @brief Wide character type.
 *
 * This type is used to represent wide characters in C.
 * It is defined as a 32-bit unsigned integer.
 */
typedef int32_t wchar_t;
#else
/**
 * @typedef wchar_t
 * @brief Wide character type.
 *
 * This type is used to represent wide characters in C.
 * It is defined as an 16-bit unsigned integer.
 */
typedef int16_t wchar_t;
#endif // defined(__STDC_MB_MIGHT_NEQ_WC__)
#endif // __cplusplus

/**
 * @def offsetof
 * @brief Macro to get the offset of a member in a structure.
 *
 * @param type The type of the structure.
 * @param member The member whose offset is to be calculated.
 *
 * @return The offset of the member in bytes.
 */
#define offsetof(type, member) \
    ((size_t)((uintptr_t) & (((type*)0)->member) - (uintptr_t)((type*)0)))

#endif // __CILIBC__STANDARD_DEFINITIONS__
