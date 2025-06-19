/**
 * @file tests/stdbool/booltruefalsearedefined.test.c
 * @brief Test for the __bool_true_false_are_defined macro in CILibc.
 *
 * This test checks if the macro __bool_true_false_are_defined is defined,
 * indicating that the boolean type and its values are available in the CILibc.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdbool.h
 *
 * @author Ismael Moreira
 */
#include "stdbool.h"

/**
 * @brief Main function for the __bool_true_false_are_defined test.
 *
 * This function checks if the macro __bool_true_false_are_defined is defined.
 * If it is not defined, the function returns 1, indicating a failure.
 *
 * @return 0 on success, 1 on failure.
 */
int main(void)
{
#if !defined(__bool_true_false_are_defined)
    return 1; // The macro should be defined
#endif

    return 0;
}
