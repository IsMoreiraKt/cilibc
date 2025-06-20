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

#if __cplusplus > 201103L
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL (nullptr)
#elif defined(__cplusplus)
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL (0L)
#else // C
/**
 * @def NULL
 * @brief Null pointer constant.
 */
#define NULL ((void*)0)
#endif // C

#endif // __CILIBC__STANDARD_DEFINITIONS__
