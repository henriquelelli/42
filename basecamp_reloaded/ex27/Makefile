# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcesar-l <hcesar-l@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 17:37:41 by hcesar-l          #+#    #+#              #
#    Updated: 2022/05/26 17:38:45 by hcesar-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SOURCE = ft_display_file.c
OBJECT = ${SOURCE:.c=.o}
GCC = gcc -Wall -Werror -Wextra
RM = rm -f

all:		${NAME}

${NAME}:	${OBJECT}
			${GCC} -o ${NAME} ${OBJECT}

.c.o:
		${GCC} -c $<

clean:
			${RM} ${OBJECT}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re