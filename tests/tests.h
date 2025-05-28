/**
 * @file tests/tests.h
 * @brief Auxiliary utility functions for cilibc tests.
 */
#ifndef __CILIBC__TESTS__
#define __CILIBC__TESTS__

/**
 * @brief Convert a long long integer to a C string.
 *
 * Converts the given number to its string representation.
 *
 * @param number The number to convert.
 * @return Pointer to a statically allocated C string representing the number.
 */
const char* __convert_to_cstring(long long number);

/**
 * @brief Calculate the length of a C string.
 *
 * Returns the number of characters in the given null-terminated string.
 *
 * @param cstr Pointer to a null-terminated C string.
 * @return The length of the string (excluding the null terminator).
 */
unsigned long __strlen(const char* cstr);

#endif /// __CILIBC__TESTS__
