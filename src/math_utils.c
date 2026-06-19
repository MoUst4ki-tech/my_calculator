/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** math_utils.c
*/

#include "my_calculator.h"

void compute_moyenne(general_t *general)
{
    MOYENNE = (SOMME / (PAIRE + IMPAIRE));
}

int commun_nbr(general_t *general)
{
    if (!is_fibonacci(general)
        && !is_prime(general)
        && !is_perfect(general)
        && !is_a_fck_sqrt(general)
        && !is_a_palindrome(general)
        && !happy_number(general)
        && !is_harshad(general)
        && !is_abundant(general)
        && !is_triangular(general)) {
        return 1;
    }
    return 0;
}

void compute_pi(general_t *general)
{
    double somme = 0.0;
    double diviseur = 1.0;
    int signe = 1;

    for (int i = 0; i < ITERATION; i++) {
        somme += signe * (1.0 / diviseur);
        diviseur += 2.0;
        signe *= -1;
    }
    PI = somme * 4.0;
}

int happy_number(general_t *general)
{
    int temp = I;
    int somme = 0;
    int chiffre = 0;

    if (I == 1)
        return 0;
    while (temp != 1 && temp != 4) {
        while (temp != 0) {
            chiffre = temp % 10;
            somme += (chiffre * chiffre);
            temp = temp / 10;
        }
        temp = somme;
        somme = 0;
    }
    if (temp == 1)
        return 1;
    else
        return 0;
}

int is_harshad(general_t *general)
{
    int somme_chiffres = 0;
    int temp = I;

    if (I == 1)
        return 0;
    if (I <= 0)
        return 0;
    while (temp > 0) {
        somme_chiffres += temp % 10;
        temp /= 10;
    }
    if (somme_chiffres > 0 && I % somme_chiffres == 0)
        return 1;
    return 0;
}

int is_abundant(general_t *general)
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
    if (somme > I)
        return 1;
    return 0;
}

int is_triangular(general_t *general)
{
    int somme = 0;

    if (I == 1)
        return 0;
    if (I < 0)
        return 0;
    for (int n = 1; somme < I; n++) {
        somme += n;
    }
    if (somme == I)
        return 1;
    return 0;
}
