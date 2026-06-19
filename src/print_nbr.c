/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** print_number.c
*/

#include "my_calculator.h"

static void print_number_base(general_t *general)
{
    if (is_pair(general) == 1)
        printf("\033[34m%02d : PAIR\033[0m", I);
    else if (is_impaire(general) == 1)
        printf("\033[33m%02d : IMPAIRE\033[0m", I);
    if (is_prime(general) == 1)
        printf("\033[32m PREMIER\033[0m");
    if (is_perfect(general) == 1)
        printf("\033[31m NOMBRE PARFAIT\033[0m");
}

static void print_number_ext(general_t *general)
{
    if (is_fibonacci(general) == 1)
        printf("\033[96m FIBONACCI\033[0m");
    if (commun_nbr(general) == 1)
        printf("\033[35m COMMUN\033[0m");
    if (is_a_fck_sqrt(general) == 1)
        printf("\033[31m CARRE PARFAIT\033[0m");
    if (is_a_palindrome(general) == 1)
        printf("\033[33m PALINDROME\033[0m");
    if (happy_number(general) == 1)
        printf("\033[92m NBR JOYEUX\033[0m");
    if (is_harshad(general) == 1)
        printf("\033[94m HARSHAD\033[0m");
    if (is_abundant(general) == 1)
        printf("\033[32m ABONDANT\033[0m");
    if (is_triangular(general) == 1)
        printf("\033[95m TRIANGULAIRE\033[0m");
}

void print_number_status(general_t *general)
{
    if (PRINT == 0) {
        printf("\r\033[36mJe calcule attt... (Nombre en cours : %d)\033[0m", I);
        fflush(stdout);
        return;
    }
    print_number_base(general);
    print_number_ext(general);
    printf("\n");
}
