/**
 * @file include/stdint.h
 * @brief Standard integer type definitions.
 *
 * Defines fixed-width integer types for the library.
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

#endif // __CILIBC__STANDARD_INTEGER__
