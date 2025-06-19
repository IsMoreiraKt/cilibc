/**
 * @file tests/stdint/least/uintleast16max.test.c
 * @brief Test for UINT_LEAST16_MAX.
 *
 * This test checks that the UINT_LEAST16_MAX macro is defined correctly
 * and that it equals 65535, which is the maximum value for an unsigned 16
 * bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test UINT_LEAST16_MAX.
 *
 * This function checks if UINT_LEAST16_MAX is equal to 65535.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint_least16_t test_value = 65535;

    if (UINT_LEAST16_MAX != test_value)
        return 1;

    return 0;
}
