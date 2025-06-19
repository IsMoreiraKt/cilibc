/**
 * @file tests/stdint/uint64max.test.c
 * @brief Test for UINT64_MAX.
 *
 * This test checks that the UINT64_MAX macro is defined correctly
 * and that it equals 18446744073709551615, which is the maximum value
 * for a 64-bit unsigned integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test UINT64_MAX.
 *
 * This function checks if UINT64_MAX is equal to 18446744073709551615.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main()
{
    uint64_t test_value = 18446744073709551615;

    if (UINT64_MAX != test_value)
        return 1;

    return 0;
}
