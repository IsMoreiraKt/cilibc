/**
 * @file tests/stdbool/bool.test.c
 * @brief Test for the boolean type and values in CILibc.
 *
 * This test checks the functionality of the boolean type and its values
 * defined in the CILibc standard library. It verifies that the boolean
 * type can be used in a simple loop and that the values true and false
 * behave as expected.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdbool.h
 *
 * @author Ismael Moreira
 */
#include "stdbool.h"

/**
 * @brief Main function for the boolean test.
 *
 * This function tests the boolean type by using it in a loop that
 * iterates 10 times. It checks if the iterator reaches the expected
 * value of 10, indicating that the boolean type and its values are
 * functioning correctly.
 *
 * @return 0 on success, 1 on failure.
 */
int main(void)
{
    bool is_true = true;
    int iterator = 0;

    while (is_true) {
        iterator++;

        if (iterator >= 10)
            is_true = false;
    }

    if (iterator != 10)
        return 1;

    return 0;
}
