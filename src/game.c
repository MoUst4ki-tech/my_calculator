/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** game.c
*/

#include "my_calculator.h"

void game_loop(general_t *general)
{
    int score_actuel = 0;
    int is_pr, is_perf, is_fib, is_sq, is_pal, is_hap, is_har, is_ab, is_tri;

    while (I <= ITERATION) {
        usleep(DURATION * 1000);
        is_pr = is_prime(general);
        is_perf = is_perfect(general);
        is_fib = is_fibonacci(general);
        is_sq = is_a_fck_sqrt(general);
        is_pal = is_a_palindrome(general);
        is_hap = happy_number(general);
        is_har = is_harshad(general);
        is_ab = is_abundant(general);
        is_tri = is_triangular(general);
        PAIRE += is_pair(general);
        IMPAIRE += is_impaire(general);
        PREMIER += is_pr;
        PERFECT += is_perf;
        FIBONACCI += is_fib;
        COMMUN_NBR += commun_nbr(general);
        PERFECT_SQUARE += is_sq;
        PALINDROME += is_pal;
        HAPPY_NBR += is_hap;
        HARSHAD += is_har;
        ABUNDANT += is_ab;
        TRIANGULAR += is_tri;
        if (I > 1) {
            score_actuel = is_pr + is_perf + is_fib + is_sq + is_pal + is_hap + is_har + is_ab + is_tri;
            if (score_actuel > MAX_SCORE) {
                MAX_SCORE = score_actuel;
                BEST_NUMBER = I;
            }
        }
        compute_pi(general);
        print_number_status(general);
        SOMME += I;
        I += STEP;
    }
}
