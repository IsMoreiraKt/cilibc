/**
 * @file tests/stddef/null/assignnull.test.c
 * @brief Test for assigning NULL to various pointer types.
 *
 * This test checks that pointers of different types can be assigned NULL
 * and that they remain NULL when checked.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stddef.h
 * @see arch/__your_arch__/bits/stddef.h
 *
 * @author Ismael Moreira
 */
#include <stddef.h>

/**
 * @brief Main function to test assigning NULL to various pointer types.
 *
 * This function initializes pointers of different types to NULL and checks
 * if they are indeed NULL. If any pointer is not NULL, the function returns 1
 * indicating a failure. If all pointers are NULL, it returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    void* ptr = NULL;
    char* str = NULL;
    short* short_ptr = NULL;
    int* int_ptr = NULL;
    long* long_ptr = NULL;
    double* double_ptr = NULL;
    float* float_ptr = NULL;

    if (ptr != NULL || str != NULL || short_ptr != NULL || int_ptr != NULL || long_ptr != NULL || double_ptr != NULL || float_ptr != NULL)
        return 1;

    return 0;
}
