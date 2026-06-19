/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** pourcentage.c
*/

#include "my_calculator.h"

void compute_all_percentages(general_t *general)
{
    int total = PAIRE + IMPAIRE;

    if (total == 0)
        return;
    P_PAIRE = (((float)PAIRE / total) * 100);
    P_IMPAIRE = (((float)IMPAIRE / total) * 100);
    P_PREMIER = (((float)PREMIER / total) * 100);
    P_PERFECT = (((float)PERFECT / total) * 100);
    P_FIBONACCI = (((float)FIBONACCI / total) * 100);
    P_COMMUN = (((float)COMMUN_NBR / total) * 100);
    P_PERFECT_SQUARE = (((float)PERFECT_SQUARE / total) * 100);
    P_PALINDROME = (((float)PALINDROME / total) * 100);
    P_HAPPY_NBR = (((float)HAPPY_NBR / total) * 100);
    P_HARSHAD = (((float)HARSHAD / total) * 100);
    P_ABUNDANT = (((float)ABUNDANT / total) * 100);
    P_TRIANGULAR = (((float)TRIANGULAR / total) * 100);
}
