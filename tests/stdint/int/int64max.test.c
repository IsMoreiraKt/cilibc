/**
 * @file tests/stdint/int/int64max.test.c
 * @brief Test for INT64_MAX.
 *
 * This test checks that the INT64_MAX macro is defined correctly
 * and that it equals 9223372036854775807, which is the maximum value
 * for a 64-bit signed integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INT64_MAX.
 *
 * This function checks if INT64_MAX is equal to 9223372036854775807.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int64_t test_value = 9223372036854775807;

    if (INT64_MAX != test_value)
        return 1;

    return 0;
}
