/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** prototype.h
*/

#ifndef PROTOTYPE_H
    #define PROTOTYPE_H

/* Core & Parsing */
void init_all(general_t *general);
void game_loop(general_t *general);
int parse_argv(general_t *general, int argc, char **argv);
int help(int argc, char **argv);

/* Utils */
int my_str_isnum(char *str);
char *format_thousands(int nbr, char *buffer);

/* Maths & Checks */
int is_pair(general_t *general);
int is_impaire(general_t *general);
int is_prime(general_t *general);
int is_perfect(general_t *general);
int is_fibonacci(general_t *general);
int is_a_fck_sqrt(general_t *general);
int is_a_palindrome(general_t *general);
int commun_nbr(general_t *general);
void compute_pi(general_t *general);
int happy_number(general_t *general);
int is_harshad(general_t *general);
int is_abundant(general_t *general);
int is_triangular(general_t *general);

/* Statistics */
void compute_all_percentages(general_t *general);
void compute_moyenne(general_t *general);

/* Display */
void print(general_t *general);
void print_help(void);
void print_number_status(general_t *general);

#endif
