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

/**
 * @typedef int_fast8_t
 * @brief Fastest signed integer type with at least 8 bits.
 */
typedef int8_t int_fast8_t;

/**
 * @typedef int_fast16_t
 * @brief Fastest signed integer type with at least 16 bits.
 */
typedef int16_t int_fast16_t;

/**
 * @typedef int_fast32_t
 * @brief Fastest signed integer type with at least 32 bits.
 */
typedef int32_t int_fast32_t;

/**
 * @typedef int_fast64_t
 * @brief Fastest signed integer type with at least 64 bits.
 */
typedef int64_t int_fast64_t;

/**
 * @typedef uint_fast8_t
 * @brief Fastest unsigned integer type with at least 8 bits.
 */
typedef uint8_t uint_fast8_t;

/**
 * @typedef uint_fast16_t
 * @brief Fastest unsigned integer type with at least 16 bits.
 */
typedef uint16_t uint_fast16_t;

/**
 * @typedef uint_fast32_t
 * @brief Fastest unsigned integer type with at least 32 bits.
 */
typedef uint32_t uint_fast32_t;

/**
 * @typedef uint_fast64_t
 * @brief Fastest unsigned integer type with at least 64 bits.
 */
typedef uint64_t uint_fast64_t;

/**
 * @def INT8_MIN
 * @brief Minimum value for a signed 8-bit integer.
 */
#define INT8_MIN ((int8_t)-0x80)

/**
 * @def INT16_MIN
 * @brief Minimum value for a signed 16-bit integer.
 */
#define INT16_MIN ((int16_t)-0x8000)

/**
 * @def INT32_MIN
 * @brief Minimum value for a signed 32-bit integer.
 */
#define INT32_MIN ((int32_t)-0x80000000)

/**
 * @def INT8_MAX
 * @brief Maximum value for a signed 8-bit integer.
 */
#define INT8_MAX ((int8_t)0x7F)

/**
 * @def INT16_MAX
 * @brief Maximum value for a signed 16-bit integer.
 */
#define INT16_MAX ((int16_t)0x7FFF)

/**
 * @def INT32_MAX
 * @brief Maximum value for a signed 32-bit integer.
 */
#define INT32_MAX ((int32_t)0x7FFFFFFF)

/**
 * @def UINT8_MAX
 * @brief Maximum value for an unsigned 8-bit integer.
 */
#define UINT8_MAX ((uint8_t)0xFF)

/**
 * @def UINT16_MAX
 * @brief Maximum value for an unsigned 16-bit integer.
 */
#define UINT16_MAX ((uint16_t)0xFFFF)

/**
 * @def UINT32_MAX
 * @brief Maximum value for an unsigned 32-bit integer.
 */
#define UINT32_MAX ((uint32_t)0xFFFFFFFF)

/**
 * @def INT_LEAST8_MIN
 * @brief Minimum value for a signed integer type with at least 8 bits.
 */
#define INT_LEAST8_MIN INT8_MIN

/**
 * @def INT_LEAST16_MIN
 * @brief Minimum value for a signed integer type with at least 16 bits.
 */
#define INT_LEAST16_MIN INT16_MIN

/**
 * @def INT_LEAST32_MIN
 * @brief Minimum value for a signed integer type with at least 32 bits.
 */
#define INT_LEAST32_MIN INT32_MIN

/**
 * @def INT_LEAST64_MIN
 * @brief Minimum value for a signed integer type with at least 64 bits.
 */
#define INT_LEAST64_MIN INT64_MIN

/**
 * @def INT_LEAST8_MAX
 * @brief Maximum value for a signed integer type with at least 8 bits.
 */
#define INT_LEAST8_MAX INT8_MAX

/**
 * @def INT_LEAST16_MAX
 * @brief Maximum value for a signed integer type with at least 16 bits.
 */
#define INT_LEAST16_MAX INT16_MAX

/**
 * @def INT_LEAST32_MAX
 * @brief Maximum value for a signed integer type with at least 32 bits.
 */
#define INT_LEAST32_MAX INT32_MAX

/**
 * @def INT_LEAST64_MAX
 * @brief Maximum value for a signed integer type with at least 64 bits.
 */
#define INT_LEAST64_MAX INT64_MAX

/**
 * @def UINT_LEAST8_MAX
 * @brief Maximum value for an unsigned integer type with at least 8 bits.
 */
#define UINT_LEAST8_MAX UINT8_MAX

/**
 * @def UINT_LEAST16_MAX
 * @brief Maximum value for an unsigned integer type with at least 16 bits.
 */
#define UINT_LEAST16_MAX UINT16_MAX

/**
 * @def UINT_LEAST32_MAX
 * @brief Maximum value for an unsigned integer type with at least 32 bits.
 */
#define UINT_LEAST32_MAX UINT32_MAX

/**
 * @def UINT_LEAST64_MAX
 * @brief Maximum value for an unsigned integer type with at least 64 bits.
 */
#define UINT_LEAST64_MAX UINT64_MAX

/**
 * @def INT_FAST8_MIN
 * @brief Minimum value for the fastest signed integer type with at least 8 bits.
 */
#define INT_FAST8_MIN INT8_MIN

/**
 * @def INT_FAST16_MIN
 * @brief Minimum value for the fastest signed integer type with at least 16 bits.
 */
#define INT_FAST16_MIN INT16_MIN

/**
 * @def INT_FAST32_MIN
 * @brief Minimum value for the fastest signed integer type with at least 32 bits.
 */
#define INT_FAST32_MIN INT32_MIN

/**
 * @def INT_FAST64_MIN
 * @brief Minimum value for the fastest signed integer type with at least 64 bits.
 */
#define INT_FAST64_MIN INT64_MIN

/**
 * @def INT_FAST8_MAX
 * @brief Maximum value for the fastest signed integer type with at least 8 bits.
 */
#define INT_FAST8_MAX INT8_MAX

/**
 * @def INT_FAST16_MAX
 * @brief Maximum value for the fastest signed integer type with at least 16 bits.
 */
#define INT_FAST16_MAX INT16_MAX

/**
 * @def INT_FAST32_MAX
 * @brief Maximum value for the fastest signed integer type with at least 32 bits.
 */
#define INT_FAST32_MAX INT32_MAX

/**
 * @def INT_FAST64_MAX
 * @brief Maximum value for the fastest signed integer type with at least 64 bits.
 */
#define INT_FAST64_MAX INT64_MAX

/**
 * @def UINT_FAST8_MAX
 * @brief Maximum value for the fastest unsigned integer type with at least 8 bits.
 */
#define UINT_FAST8_MAX UINT8_MAX

/**
 * @def UINT_FAST16_MAX
 * @brief Maximum value for the fastest unsigned integer type with at least 16 bits.
 */
#define UINT_FAST16_MAX UINT16_MAX

/**
 * @def UINT_FAST32_MAX
 * @brief Maximum value for the fastest unsigned integer type with at least 32 bits.
 */
#define UINT_FAST32_MAX UINT32_MAX

/**
 * @def UINT_FAST64_MAX
 * @brief Maximum value for the fastest unsigned integer type with at least 64 bits.
 */
#define UINT_FAST64_MAX UINT64_MAX

/**
 * @def SIG_ATOMIC_MIN
 * @brief Minimum value for a signed integer type capable of holding a signal.
 */
#define SIG_ATOMIC_MIN INT32_MIN

/**
 * @def SIG_ATOMIC_MAX
 * @brief Maximum value for a signed integer type capable of holding a signal.
 */
#define SIG_ATOMIC_MAX INT32_MAX

/**
 * @def WCHAR_MIN
 * @brief Minimum value for a wide character type.
 */
#define WCHAR_MIN INT32_MIN

/**
 * @def WCHAR_MAX
 * @brief Maximum value for a wide character type.
 */
#define WCHAR_MAX INT32_MAX

#endif // __CILIBC__STANDARD_INTEGER__
