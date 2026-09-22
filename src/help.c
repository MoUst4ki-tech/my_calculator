/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** help.c
*/

#include "my_calculator.h"

int help(int argc, char **argv)
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        print_help();
        return 1;
    }
    return 0;
}
