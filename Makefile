NAME = libft.a
SRC = *.c
WRNG = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(WRNG) -c $(SRC)
	ar rcs $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
