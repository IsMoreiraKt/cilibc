/**
 * @file arch/x86_64/bits/stdint.h
 * @brief Defines integer types for x86_64 architecture.
 *
 * Provides typedefs for signed and unsigned integers.
 * Assumes LP64 data model: long == 64 bits
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 *
 * @author Ismael Moreira
 */
#ifndef __CILIBC__X86_64__STANDARD_INTEGER__
#define __CILIBC__X86_64__STANDARD_INTEGER__

/**
 * @typedef _Int64
 * @brief Signed 64-bit integer type.
 */
typedef signed long _Int64;

/**
 * @typedef _Uint64
 * @brief Unsigned 64-bit integer type.
 */
typedef unsigned long _Uint64;

/**
 * @typedef intptr_t
 * @brief Signed integer type capable of holding a pointer.
 */
typedef signed long intptr_t;

/**
 * @typedef uintptr_t
 * @brief Unsigned integer type capable of holding a pointer.
 */
typedef unsigned long uintptr_t;

/**
 * @def INTPTR_MIN
 * @brief Minimum value for a signed integer type capable of holding a pointer.
 */
#define INTPTR_MIN ((int64_t)-0x8000000000000000L)

/**
 * @def INTPTR_MAX
 * @brief Maximum value for a signed integer type capable of holding a pointer.
 */
#define INTPTR_MAX ((int64_t)0x7FFFFFFFFFFFFFFFL)

/**
 * @def UINTPTR_MAX
 * @brief Maximum value for an unsigned integer type capable of holding a pointer.
 */
#define UINTPTR_MAX ((uint64_t)0xFFFFFFFFFFFFFFFFUL)

/**
 * @def PTRDIFF_MIN
 * @brief Minimum value for the result of subtracting two pointers.
 */
#define PTRDIFF_MIN ((int64_t)-0x8000000000000000L)

/**
 * @def PTRDIFF_MAX
 * @brief Maximum value for the result of subtracting two pointers.
 */
#define PTRDIFF_MAX ((int64_t)0x7FFFFFFFFFFFFFFFL)

/**
 * @def SIZE_MAX
 * @brief Maximum value for the size of any object.
 */
#define SIZE_MAX ((uint64_t)0xFFFFFFFFFFFFFFFFUL)

#endif // __CILIBC__X86_64__STANDARD_INTEGER__
