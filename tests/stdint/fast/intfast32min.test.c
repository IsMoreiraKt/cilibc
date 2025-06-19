/**
 * @file tests/stdint/fast/intfast32min.test.c
 * @brief Test for the int_fast32_t minimum value.
 *
 * This test checks that the INT_FAST32_MIN macro is defined correctly
 * and that it equals -2147483648, which is the minimum value for a signed
 * 32-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INT_FAST32_MIN.
 *
 * This function checks if INT_FAST32_MIN is equal to -2147483648.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_fast32_t test_value = -2147483648;

    if (INT_FAST32_MIN != test_value)
        return 1;

    return 0;
}
