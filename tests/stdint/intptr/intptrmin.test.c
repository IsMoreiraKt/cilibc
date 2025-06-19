/**
 * @file tests/stdint/intptr/intptrmin.test.c
 * @brief Test for the intptr_t minimum value.
 *
 * This test checks that the INTPTR_MIN macro is defined correctly
 * and that it equals -9223372036854775808, which is the minimum value
 * for an intptr_t type, a signed 64-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INTPTR_MIN.
 *
 * This function checks if INTPTR_MIN is equal to -9223372036854775808.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    intptr_t test_value = -9223372036854775808;

    if (INTPTR_MIN != test_value)
        return 1;

    return 0;
}
