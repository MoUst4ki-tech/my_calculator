/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** math.c
*/

#include "my_calculator.h"

int is_prime(general_t *general)
{
    int div = 2;

    if (I <= 1)
        return 0;
    while (div < I) {
        if (I % div == 0)
            return 0;
        div++;
    }
    return 1;
}

int is_perfect(general_t *general)
{
    int somme = 0;
    int diviseur = 1;

    if (I <= 1)
        return 0;
    while (diviseur <= I / 2) {
        if (I % diviseur == 0)
            somme += diviseur;
        diviseur++;
    }
    if (somme == I)
        return 1;
    return 0;
}

int is_fibonacci(general_t *general)
{
    int previous = 0;
    int current = 1;

    if (I < 0)
        return 0;
    if (I == 0 || I == 1)
        return 1;
    while (current < I) {
        int next = current + previous;

        previous = current;
        current = next;
    }
    return current == I;
}

int is_a_fck_sqrt(general_t *general)
{
    int i = 0;

    if (I == 1)
        return 0;
    if (I < 0)
        return 0;
    while (i * i < I && i < 46340)
        i++;
    if (i * i == I)
        return 1;
    return 0;
}

int is_a_palindrome(general_t *general)
{
    int reversed = 0;
    int temp = I;

    if (I < 0)
        return 0;
    if (I >= 0 && I < 10)
        return 0;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp = temp / 10;
    }
    if (reversed == I)
        return 1;
    return 0;
}
