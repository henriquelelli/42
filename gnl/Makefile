all:
	gcc -Wall -Werror -Wextra -g main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=1

mem:
	valgrind -s --leak-check=full --track-origins=yes ./a.out