/*
** EPITECH PROJECT, 2025
** bahahah
** File description:
** utils.c
*/

#include "my_calculator.h"

int my_str_isnum(char *str)
{
    int i = 0;

    if (str == NULL || str[0] == '\0')
        return ERROR_VALUE;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}

int is_pair(general_t *general)
{
    if (I % 2 == 0) {
        return 1;
    }
    return 0;
}

int is_impaire(general_t *general)
{
    if (I % 2 != 0) {
        return 1;
    }
    return 0;
}

char *format_thousands(int nbr, char *buffer)
{
    int i = 29;
    int count = 0;

    buffer[i] = '\0';
    i--;
    if (nbr == 0) {
        buffer[i] = '0';
        i--;
    }
    while (nbr > 0) {
        if (count > 0 && count % 3 == 0) {
            buffer[i] = ' ';
            i--;
        }
        buffer[i] = (nbr % 10) + '0';
        i--;
        nbr /= 10;
        count++;
    }
    return &buffer[i + 1];
}
