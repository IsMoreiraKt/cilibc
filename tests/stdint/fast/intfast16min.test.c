/**
 * @file tests/stdint/fast/intfast16min.test.c
 * @brief Test for the int_fast16_t minimum value.
 *
 * This test checks that the INT_FAST16_MIN macro is defined correctly
 * and that it equals -32768, which is the minimum value for a signed
 * 16-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stdint.h"

/**
 * @brief Main function to test INT_FAST16_MIN.
 *
 * This function checks if INT_FAST16_MIN is equal to -32768.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_fast16_t test_value = -32768;

    if (INT_FAST16_MIN != test_value)
        return 1;

    return 0;
}
