#include "my_calculator.h"
#include <stdio.h>
#include <stdlib.h>

static void assert_int(const char *label, int actual, int expected)
{
    if (actual != expected) {
        fprintf(stderr, "[FAIL] %s: expected %d, got %d\n",
            label, expected, actual);
        exit(1);
    }
}

int main(void)
{
    general_t general = {0};

    general.config.i = 7;
    assert_int("is_prime(7)", is_prime(&general), 1);

    general.config.i = 2;
    assert_int("is_prime(2)", is_prime(&general), 1);

    general.config.i = 4;
    assert_int("is_prime(4)", is_prime(&general), 0);

    general.config.i = 6;
    assert_int("is_perfect(6)", is_perfect(&general), 1);

    general.config.i = 28;
    assert_int("is_perfect(28)", is_perfect(&general), 1);

    general.config.i = 8;
    assert_int("is_fibonacci(8)", is_fibonacci(&general), 1);

    general.config.i = 10;
    assert_int("is_fibonacci(10)", is_fibonacci(&general), 0);

    general.config.i = 13;
    assert_int("is_fibonacci(13)", is_fibonacci(&general), 1);

    general.config.i = 16;
    assert_int("is_a_fck_sqrt(16)", is_a_fck_sqrt(&general), 1);

    general.config.i = 121;
    assert_int("is_a_palindrome(121)", is_a_palindrome(&general), 1);

    general.config.i = 19;
    assert_int("happy_number(19)", happy_number(&general), 1);

    general.config.i = 12;
    assert_int("is_harshad(12)", is_harshad(&general), 1);

    general.config.i = 12;
    assert_int("is_abundant(12)", is_abundant(&general), 1);

    general.config.i = 15;
    assert_int("is_triangular(15)", is_triangular(&general), 1);

    general.config.i = -1;
    assert_int("is_prime(-1)", is_prime(&general), 0);
    general.config.i = -1;
    assert_int("is_a_palindrome(-1)", is_a_palindrome(&general), 0);
    general.config.i = 0;
    assert_int("is_fibonacci(0)", is_fibonacci(&general), 1);

    printf("All calculator tests passed successfully.\n");
    return 0;
}
