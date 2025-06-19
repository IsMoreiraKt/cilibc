/**
 * @file tests/stdint/uint16max.test.c
 * @brief Test for UINT16_MAX.
 *
 * This test checks that the UINT16_MAX macro is defined correctly
 * and that it equals 65535, which is the maximum value for a 16-bit
 * unsigned integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test UINT16_MAX.
 *
 * This function checks if UINT16_MAX is equal to 65535.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint16_t test_value = 65535;

    if (UINT16_MAX != test_value)
        return 1;

    return 0;
}
