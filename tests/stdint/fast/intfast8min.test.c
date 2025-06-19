/**
 * @file tests/stdint/fast/intfast8min.test.c
 * @brief Test for the int_fast8_t minimum value.
 *
 * This test checks that the INT_FAST8_MIN macro is defined correctly
 * and that it equals -128, which is the minimum value for a signed
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
 * @brief Main function to test INT_FAST8_MIN.
 *
 * This function checks if INT_FAST8_MIN is equal to -128.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_fast8_t test_value = -128;

    if (INT_FAST8_MIN != test_value)
        return 1;

    return 0;
}
