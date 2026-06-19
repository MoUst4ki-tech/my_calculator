/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** struct.h
*/

#ifndef STRUCT_H
    #define STRUCT_H

/* Sous-structure pour la configuration et la boucle */
typedef struct config_s {
    int i;
    int iteration;
    int step;
    int duration;
    int print;
} config_t;

/* Sous-structure pour les compteurs bruts */
typedef struct count_s {
    int paire;
    int impaire;
    int premier;
    int perfect;
    int fibonacci;
    int perfect_square;
    int palindrome;
    int commun_nbr;
    int happy_nbr;
    int harshad;
    int abundant;
    int triangular;
} count_t;

/* Sous-structure pour les pourcentages */
typedef struct percent_s {
    float p_paire;
    float p_impaire;
    float p_premier;
    float p_perfect;
    float p_fibonacci;
    float p_perfect_square;
    float p_palindrome;
    float p_commun;
    float p_happy_nbr;
    float p_harshad;
    float p_abundant;
    float p_triangular;
} percent_t;

/* Sous-structure pour l'état des calculs mathématiques */
typedef struct math_state_s {
    int previous;
    int current;
    int somme;
    int moyenne;
    double pi;
    int max_score;
    int best_number;
} math_state_t;

/* Structure principale qui englobe toutes les autres */
typedef struct general_s {
    config_t config;
    count_t count;
    percent_t percent;
    math_state_t math;
} general_t;

#endif
