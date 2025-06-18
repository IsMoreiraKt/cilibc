/**
 * @file tests/stdint/int8_min.test.c
 * @brief Test for INT8_MIN.
 *
 * This test checks that the INT8_MIN macro is defined correctly
 * and that it equals -128, which is the minimum value for an 8-bit signed integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT8_MIN.
 *
 * This function checks if INT8_MIN is equal to -128.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int8_t test_value = -128;

    if (INT8_MIN != test_value)
        return 1;

    return 0;
}
