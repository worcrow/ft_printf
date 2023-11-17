CC = cc
CFLAG = -Wall -Wextra -Werror

SRC = $(shell find "src" -type f -name '*.c' ! -name '*bonus.c')
SRC_BONUS = $(shell find "src" -type f -name '*bonus.c')

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

NAME = libft.a
LIB = include/libft.h

all : $(NAME)
	
$(NAME) : $(OBJ)
	ar -rcs $@ $^

bonus : $(OBJ_BONUS)
	ar -rs $(NAME) $^

%.o : %.c $(LIB)
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
