CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(shell find src -type f -name '*.c') ft_printf.c
OBJ = $(SRC:.c=.o) external/src/ft_strlen.o

HEADER = include/function_used.h ft_printf.h
NAME = libftprintf.a
EXTER = external/src/ft_strlen.c

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $@ $^

%.o : %.c $(HEADER) $(EXTER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
