/**
 * @file tests/stdint/least/intleast16max.test.c
 * @brief Test for INT_LEAST16_MAX.
 *
 * This test checks that the INT_LEAST16_MAX macro is defined correctly
 * and that it equals 32767, which is the maximum value for a signed
 * 16-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INT_LEAST16_MAX.
 *
 * This function checks if INT_LEAST16_MAX is equal to 32767.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_least16_t test_value = 32767;

    if (INT_LEAST16_MAX != test_value)
        return 1;

    return 0;
}
