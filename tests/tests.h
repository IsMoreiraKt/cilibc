/**
 * @file tests/tests.h
 * @brief Auxiliary utility functions for cilibc tests.
 *
 * @author Ismael Moreira
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

/**
 * @brief Print a buffer to the standard output.
 *
 * Writes the specified number of bytes from the given buffer to stdout.
 * This function does not append a newline or null terminator.
 *
 * @param cstr Pointer to the buffer to print.
 * @param size Number of bytes to write from the buffer.
 */
void __print(const char* cstr, unsigned long size);

#endif /// __CILIBC__TESTS__
