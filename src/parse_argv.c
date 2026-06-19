/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** parse_argv.c
*/

#include "my_calculator.h"

static int flag_p(general_t *general, int argc, char **argv, int *idx)
{
    if (strcmp(argv[*idx], "-p") == 0) {
        if (*idx + 1 < argc && my_str_isnum(argv[*idx + 1]) == 1) {
            PRINT = atoi(argv[*idx + 1]);
            (*idx)++;
            return 1;
        }
        return ERROR_VALUE;
    }
    return 0;
}

static int flag_d(general_t *general, int argc, char **argv, int *idx)
{
    if (strcmp(argv[*idx], "-d") == 0) {
        if (*idx + 1 < argc && my_str_isnum(argv[*idx + 1]) == 1) {
            DURATION = atoi(argv[*idx + 1]);
            (*idx)++;
            return 1;
        }
        return ERROR_VALUE;
    }
    return 0;
}

static int flag_s(general_t *general, int argc, char **argv, int *idx)
{
    if (strcmp(argv[*idx], "-s") != 0)
        return 0;
    if (*idx + 1 < argc && my_str_isnum(argv[*idx + 1]) == 1) {
        STEP = atoi(argv[*idx + 1]);
        (*idx)++;
        if (STEP <= 0)
            return ERROR_VALUE;
        return 1;
    }
    return ERROR_VALUE;
}

static int flag_i(general_t *general, int argc, char **argv, int *idx)
{
    if (strcmp(argv[*idx], "-i") == 0) {
        if (*idx + 1 < argc && my_str_isnum(argv[*idx + 1]) == 1) {
            ITERATION = atoi(argv[*idx + 1]);
            (*idx)++;
            return 1;
        }
        return ERROR_VALUE;
    }
    return 0;
}

static int flag_initial(general_t *general, int argc, char **argv, int *idx)
{
    if (strcmp(argv[*idx], "-I") == 0) {
        if (*idx + 1 < argc && my_str_isnum(argv[*idx + 1]) == 1) {
            I = atoi(argv[*idx + 1]);
            (*idx)++;
            return 1;
        }
        return ERROR_VALUE;
    }
    return 0;
}

int parse_argv(general_t *general, int argc, char **argv)
{
    int idx = 1;
    int status = 0;

    while (idx < argc) {
        status = flag_p(general, argc, argv, &idx);
        if (status == 0)
            status = flag_d(general, argc, argv, &idx);
        if (status == 0)
            status = flag_s(general, argc, argv, &idx);
        if (status == 0)
            status = flag_i(general, argc, argv, &idx);
        if (status == 0)
            status = flag_initial(general, argc, argv, &idx);
        if (status == ERROR_VALUE || status == 0)
            return ERROR_VALUE;
        idx++;
    }
    if (I > ITERATION)
        return ERROR_VALUE;
    return 0;
}
