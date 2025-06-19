/**
 * @file tests/stdint/int/int8max.test.c
 * @brief Test for INT8_MAX.
 *
 * This test checks that the INT8_MAX macro is defined correctly
 * and that it equals 127, which is the maximum value for an 8-bit signed
 * integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function for the INT8_MAX test.
 *
 * This function checks if the INT8_MAX macro is defined correctly
 * and returns 0 if the test passes, or 1 if it fails.
 *
 * @return 0 on success, 1 on failure.
 */
int main(void)
{
    int8_t test_value = 127;

    if (INT8_MAX != test_value)
        return 1;

    return 0;
}
