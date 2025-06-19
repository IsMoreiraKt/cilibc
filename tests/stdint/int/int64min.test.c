/**
 * @file tests/stdint/int/int64min.test.c
 * @brief Test for INT64_MIN.
 *
 * This test checks that the INT64_MIN macro is defined correctly
 * and that it equals -9223372036854775808, which is the minimum value
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
 * @brief Main function to test INT64_MIN.
 *
 * This function checks if INT64_MIN is equal to -9223372036854775808.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int64_t test_value = -9223372036854775808;

    if (INT64_MIN != test_value)
        return 1;

    return 0;
}
