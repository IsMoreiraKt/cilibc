/**
 * @file tests/stdint/least/uintleast64max.test.c
 * @brief Test for UINT_LEAST64_MAX.
 *
 * This test checks that the UINT_LEAST64_MAX macro is defined correctly
 * and that it equals 18446744073709551615, which is the maximum value
 * for an unsigned 64-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test UINT_LEAST64_MAX.
 *
 * This function checks if UINT_LEAST64_MAX is equal to 18446744073709551615.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint_least64_t test_value = 18446744073709551615;

    if (UINT_LEAST64_MAX != test_value)
        return 1;

    return 0;
}
