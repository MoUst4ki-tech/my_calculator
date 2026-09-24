##
## EPITECH PROJECT, 2025
## bahahah
## File description:
## Makefile
##

NAME    = my_calculator
TEST_BIN = test_calculator

CC      = gcc

CFLAGS  = -Wall -Wextra -Iinclude

SRC_DIR = src
TEST_DIR = tests

OBJ_DIR = obj

INC_DIR = include

SRC     = $(wildcard $(SRC_DIR)/*.c)
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)

OBJ     = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TEST_OBJ = $(TEST_SRC:$(TEST_DIR)/%.c=$(OBJ_DIR)/test_%.o)
LIB_OBJ = $(filter-out $(OBJ_DIR)/main.o,$(OBJ))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(TEST_BIN): $(LIB_OBJ) $(TEST_OBJ)
	$(CC) $(LIB_OBJ) $(TEST_OBJ) -o $(TEST_BIN)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/test_%.o: $(TEST_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

test: $(TEST_BIN)
	./$(TEST_BIN)

full_test: test

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) $(TEST_BIN)

re: fclean all

.PHONY: all clean fclean re test full_test