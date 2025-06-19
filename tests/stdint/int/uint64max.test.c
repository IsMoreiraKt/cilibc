/**
 * @file tests/stdint/int/uint64max.test.c
 * @brief Test for UINT64_MAX.
 *
 * This test checks that the UINT64_MAX macro is defined correctly
 * and that it equals 18446744073709551615, which is the maximum value
 * for a 64-bit unsigned integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test UINT64_MAX.
 *
 * This function checks if UINT64_MAX is equal to 18446744073709551615.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint64_t test_value = 18446744073709551615;

    if (UINT64_MAX != test_value)
        return 1;

    return 0;
}
