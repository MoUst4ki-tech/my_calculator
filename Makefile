##
## EPITECH PROJECT, 2025
## bahahah
## File description:
## Makefile
##

NAME    = my_calculator

CC      = epiclang

CFLAGS  = -Wall -Wextra -Iinclude

SRC_DIR = src

OBJ_DIR = obj

INC_DIR = include

SRC     = $(wildcard $(SRC_DIR)/*.c)

OBJ     = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re