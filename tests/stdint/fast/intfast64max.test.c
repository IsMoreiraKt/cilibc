/**
 * @file tests/stdint/fast/intfast64max.test.c
 * @brief Test for the int_fast64_t maximum value.
 *
 * This test checks that the INT_FAST64_MAX macro is defined correctly
 * and that it equals 9223372036854775807,
 * which is the maximum value for a signed
 * 64-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INT_FAST64_MAX.
 *
 * This function checks if INT_FAST64_MAX is equal to 9223372036854775807.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_fast64_t test_value = 9223372036854775807;

    if (INT_FAST64_MAX != test_value)
        return 1;

    return 0;
}
