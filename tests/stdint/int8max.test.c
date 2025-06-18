/**
 * @file tests/stdint/int8max.test.c
 * @brief Test for INT8_MAX.
 *
 * This test checks that the INT8_MAX macro is defined correctly
 * and that it equals 127, which is the maximum value for an 8-bit signed
 * integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function for the INT8_MAX test.
 *
 * This function checks if the INT8_MAX macro is defined correctly
 * and returns 0 if the test passes, or 1 if it fails.
 *
 * @return 0 on success, 1 on failure.
 */
int main(void)
{
    int8_t test_value = 127;

    if (INT8_MAX != test_value)
        return 1;

    return 0;
}
