/**
 * @file tests/stdint/fast/uintfast8max.test.c
 * @brief Test for the uint_fast8_t maximum value.
 *
 * This test checks that the UINT_FAST8_MAX macro is defined correctly
 * and that it equals 255, which is the maximum value for an unsigned
 * 8-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test UINT_FAST8_MAX.
 *
 * This function checks if UINT_FAST8_MAX is equal to 255.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint_fast8_t test_value = 255;

    if (UINT_FAST8_MAX != test_value)
        return 1;

    return 0;
}
