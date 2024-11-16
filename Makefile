CC = cc
FLAGS = -Werror -Wall -Wextra
SRC = func.c print.c 
OBJ = $(SRC:.c=.o)
NAME = print.a

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
