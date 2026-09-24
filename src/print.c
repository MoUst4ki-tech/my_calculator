/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** print.c
*/

#include "my_calculator.h"

static void print_stats_base(general_t *general)
{
    char b[5][30];

    printf("\033[34mNBR Paire     : %s (%.2f%%)\033[0m\n",
        format_thousands(PAIRE, b[0]), P_PAIRE);
    printf("\033[33mNBR Impaire   : %s (%.2f%%)\n\033[0m",
        format_thousands(IMPAIRE, b[1]), P_IMPAIRE);
    printf("\033[32mNBR Premier   : %s (%.2f%%)\033[0m\n",
        format_thousands(PREMIER, b[2]), P_PREMIER);
    printf("\033[31mNBR Parfait   : %s (%.2f%%)\033[0m\n",
        format_thousands(PERFECT, b[3]), P_PERFECT);
    printf("\033[96mNBR Fibonacci : %s (%.2f%%)\033[0m\n",
        format_thousands(FIBONACCI, b[4]), P_FIBONACCI);
}

static void print_stats_ext(general_t *general)
{
    char b[6][30];
    char buffer_har[30];
    char buffer_ab[30];
    char buffer_tri[30];

    printf("\033[33mPALINDROME    : %s (%.2f%%)\033[0m\n",
        format_thousands(PALINDROME, b[0]), P_PALINDROME);
    printf("\033[35mSomme I       : %s\033[0m\n",
        format_thousands(SOMME, b[1]));
    printf("\033[36mMoyenne       : %s\033[0m\n",
        format_thousands(MOYENNE, b[2]));
    printf("\033[35mNBR COMMUN    : %s (%.2f%%)\033[0m\n",
        format_thousands(COMMUN_NBR, b[3]), P_COMMUN);
    printf("\033[31mCARRE PARFAIT : %s (%.2f%%)\033[0m\n",
        format_thousands(PERFECT_SQUARE, b[4]), P_PERFECT_SQUARE);
    printf("\033[36mApproximation PI: %f\033[0m\n", PI);
    printf("\033[92mNBR JOYEUX : %s (%.2f%%)\033[0m\n",
        format_thousands(HAPPY_NBR, b[4]), P_HAPPY_NBR);
    printf("\033[94mNBR HARSHAD   : %s (%.2f%%)\033[0m\n",
        format_thousands(HARSHAD, buffer_har), P_HARSHAD);
    printf("\033[32mNBR ABONDANT  : %s (%.2f%%)\033[0m\n",
        format_thousands(ABUNDANT, buffer_ab), P_ABUNDANT);
    printf("\033[95mTRIANGULAIRE  : %s (%.2f%%)\033[0m\n",
        format_thousands(TRIANGULAR, buffer_tri), P_TRIANGULAR);
    printf("\033[93mLE PLUS SPECIAL: %d (avec %d spécificités)\033[0m\n",
        BEST_NUMBER, MAX_SCORE);
    printf("\033[31;1mTotal         : %s\n\033[0m",
        format_thousands(PAIRE + IMPAIRE, b[5]));
}

void print(general_t *general)
{
    compute_all_percentages(general);
    compute_moyenne(general);
    if (PRINT == 0)
        printf("\r\033[2K");
    else
        printf("\n");
    print_stats_base(general);
    print_stats_ext(general);
}

void print_help(void)
{
    printf("USAGE\n");
    printf("    ./my_calculator [-I initial] [-i iteration] "
        "[-s step] [-d duration] [-p print]\n");
    printf("    ./my_calculator -h\n\n");
    printf("DESCRIPTION\n");
    printf("    Compte les nombres pairs et impairs.\n\n");
    printf("ARGUMENTS\n");
    printf("    -h             Affiche ce message d'aide.\n");
    printf("    -I initial     Le nombre de début (par défaut : 1).\n");
    printf("    -i iteration   Le nombre d'itérations / fin de la boucle "
        "(par défaut : 50).\n");
    printf("    -s step        Le pas entre chaque nombre.\n");
    printf("    -d duration    La durée en ms (par défaut : 500ms).\n");
    printf("    -p print       0 ou 1 pour activer/désactiver l'affichage (par défaut : 0).\n");
    printf("    coucou moi.\n" );
}
