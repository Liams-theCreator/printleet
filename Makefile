CC = cc
FLAGS = -Werror -Wall -Wextra
SRC = func.c ft_printf.c 
OBJ = $(SRC:.c=.o)
NAME = printf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
