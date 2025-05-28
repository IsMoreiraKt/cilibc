/**
 * @file tests/tests.c
 * @brief Implementation of auxiliary utility functions for cilibc tests.
 *
 * Provides helper functions for string conversion, string length
 * calculation, and printing buffers to standard output,
 * used in test code.
 *
 * @author Ismael Moreira
 */
#include "tests.h"

/**
 * @brief Convert a long long integer to a C string.
 *
 * Converts the given number to its string representation.
 * The result is stored in a static buffer and will be overwritten
 * by subsequent calls.
 *
 * @param number The number to convert.
 * @return Pointer to a statically allocated C string representing
 * the number.
 */
const char* __convert_to_cstring(long long number)
{
    long long num = number;
    int is_negative = 0;
    static char buffer[12];
    char* ptr = buffer + sizeof(buffer) - 1;
    *ptr = '\0';

    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    do {
        *(--ptr) = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    if (is_negative)
        *(--ptr) = '-';

    return ptr;
}

/**
 * @brief Calculate the length of a C string.
 *
 * Returns the number of characters in the given null-terminated string.
 *
 * @param cstr Pointer to a null-terminated C string.
 * @return The length of the string (excluding the null terminator).
 */
unsigned long __strlen(const char* cstr)
{
    unsigned long len = 0;

    while (*cstr++)
        len++;

    return len;
}

/**
 * @brief Print a buffer to the standard output.
 *
 * Writes the specified number of bytes from the given buffer to stdout
 * using the write syscall (syscall number 1). This function does not
 * append a newline or null terminator.
 *
 * @param cstr Pointer to the buffer to print.
 * @param size Number of bytes to write from the buffer.
 */
void __print(const char* cstr, unsigned long size)
{
    __asm__ volatile(
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov %1, %%rdx\n"
        "syscall\n"
        :
        : "r"(cstr), "r"(size)
        : "%rax", "%rdi", "%rsi", "%rdx");
}
