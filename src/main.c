/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** main.c
*/

#include "my_calculator.h"

int main(int argc, char **argv)
{
    general_t general;

    setlocale(LC_NUMERIC, "");
    if (help(argc, argv) == 1)
        return 0;
    init_all(&general);
    if (parse_argv(&general, argc, argv) == ERROR_VALUE) {
        return ERROR_VALUE;
    }
    game_loop(&general);
    print(&general);
    return 0;
}
