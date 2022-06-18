NAME = libft.a

SRC = 	ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_putchar_fd.c\
		ft_strlen.c\
		ft_strncmp.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g #lembrar de tirar o gdb

all: $(NAME)

#pesquisar rcs
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

$(OBJ): $(SRC)
	cc $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

#lembrar de tirar
teste: re
	cc $(CFLAGS) main.c $(NAME) && ./a.out

.PHONY: all clean fclean re teste