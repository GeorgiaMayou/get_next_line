all:
	gcc -Wall -Werror -Wextra -g get_next_line.c main.c ./libft/libft.a -o gnl