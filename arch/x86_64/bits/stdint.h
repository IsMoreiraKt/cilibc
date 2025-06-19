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

#endif // __CILIBC__X86_64__STANDARD_INTEGER__
