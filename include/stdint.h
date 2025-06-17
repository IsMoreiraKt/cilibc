/**
 * @file include/stdint.h
 * @brief Standard integer type definitions.
 *
 * Defines integer types for the CILibc.
 *
 * @author Ismael Moreira
 */
#ifndef __CILIBC__STANDARD_INTEGER__
#define __CILIBC__STANDARD_INTEGER__

#if defined(x86_64)
#include "x86_64/bits/stdint.h"
#endif // defined(x86_64)

/**
 * @typedef int8_t
 * @brief Signed 8-bit integer type.
 */
typedef signed char int8_t;

/**
 * @typedef int16_t
 * @brief Signed 16-bit integer type.
 */
typedef signed short int16_t;

/**
 * @typedef int32_t
 * @brief Signed 32-bit integer type.
 */
typedef signed int int32_t;

/**
 * @typedef int64_t
 * @brief Signed 64-bit integer type.
 */
typedef _Int64 int64_t;

/**
 * @typedef uint8_t
 * @brief Unsigned 8-bit integer type.
 */
typedef unsigned char uint8_t;

/**
 * @typedef uint16_t
 * @brief Unsigned 16-bit integer type.
 */
typedef unsigned short uint16_t;

/**
 * @typedef uint32_t
 * @brief Unsigned 32-bit integer type.
 */
typedef unsigned int uint32_t;

/**
 * @typedef uint64_t
 * @brief Unsigned 64-bit integer type.
 */
typedef _Uint64 uint64_t;

/**
 * @typedef int_least8_t
 * @brief Signed integer type with at least 8 bits.
 */
typedef int8_t int_least8_t;

/**
 * @typedef int_least16_t
 * @brief Signed integer type with at least 16 bits.
 */
typedef int16_t int_least16_t;

/**
 * @typedef int_least32_t
 * @brief Signed integer type with at least 32 bits.
 */
typedef int32_t int_least32_t;

/**
 * @typedef int_least64_t
 * @brief Signed integer type with at least 64 bits.
 */
typedef int64_t int_least64_t;

/**
 * @typedef uint_least8_t
 * @brief Unsigned integer type with at least 8 bits.
 */
typedef uint8_t uint_least8_t;

/**
 * @typedef uint_least16_t
 * @brief Unsigned integer type with at least 16 bits.
 */
typedef uint16_t uint_least16_t;

/**
 * @typedef uint_least32_t
 * @brief Unsigned integer type with at least 32 bits.
 */
typedef uint32_t uint_least32_t;

/**
 * @typedef uint_least64_t
 * @brief Unsigned integer type with at least 64 bits.
 */
typedef uint64_t uint_least64_t;

#endif // __CILIBC__STANDARD_INTEGER__
