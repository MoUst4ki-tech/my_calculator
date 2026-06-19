/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** init_struct.c
*/

#include "my_calculator.h"

/* Configuration & Boucle */
static void init_config(general_t *general)
{
    I = 1;
    ITERATION = 50;
    STEP = 1;
    DURATION = 500;
    PRINT = 0;
}

/* Compteurs */
static void init_compteurs(general_t *general)
{
    PAIRE = 0;
    IMPAIRE = 0;
    PREMIER = 0;
    PERFECT = 0;
    FIBONACCI = 0;
    PERFECT_SQUARE = 0;
    PALINDROME = 0;
    COMMUN_NBR = 0;
    PI = 0;
    HAPPY_NBR = 0;
    MAX_SCORE = 0;;
    BEST_NUMBER = 0;
    HARSHAD = 0;
    ABUNDANT = 0;
    TRIANGULAR = 0;
}

/* Pourcentages */
static void init_pourcentages(general_t *general)
{
    P_PAIRE = 0.0f;
    P_IMPAIRE = 0.0f;
    P_PREMIER = 0.0f;
    P_PERFECT = 0.0f;
    P_FIBONACCI = 0.0f;
    P_PERFECT_SQUARE = 0.0f;
    P_PALINDROME = 0.0f;
    P_COMMUN = 0.0f;
    P_HAPPY_NBR = 0.0f;
    P_HARSHAD = 0.0f;
    P_ABUNDANT = 0.0f;
    P_TRIANGULAR = 0.0f;
}

/* Statistiques Globales & Variables Internes */
static void init_stats(general_t *general)
{
    SOMME = 0;
    MOYENNE = 0;
    CURRENT = 1;
    PREVIOUS = 0;
}

void init_all(general_t *general)
{
    init_config(general);
    init_compteurs(general);
    init_pourcentages(general);
    init_stats(general);
}
