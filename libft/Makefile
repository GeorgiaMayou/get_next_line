# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 09:38:31 by gmayou            #+#    #+#              #
#    Updated: 2019/06/11 17:14:16 by gmayou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJECTS = *.o
FLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I.
CLEAN = /bin/rm -f
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_putchar.c ft_putstr.c ft_putendl.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strlen.c ft_strcpy.c \
	  ft_strdup.c ft_isspace.c ft_atoi.c ft_strchr.c ft_memset.c \
	  ft_memalloc.c ft_strncpy.c ft_strrchr.c ft_strstr.c ft_memdel.c \
	  ft_bzero.c ft_strnew.c ft_strdel.c ft_strclr.c ft_memcpy.c ft_isnegative.c \
	  ft_memccpy.c ft_striter.c ft_strequ.c ft_strnequ.c ft_striteri.c \
	  ft_memmove.c ft_strcmp.c ft_strnstr.c ft_memchr.c ft_memcmp.c ft_strncmp.c \
	  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strmap.c ft_strmapi.c ft_strsub.c \
	  ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_putnbr.c ft_itoa.c ft_strrev.c \
	  ft_strsplit.c ft_wrdlen.c ft_wrdcnt.c ft_isupper.c ft_islower.c ft_lstnew.c \
	  ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstdelone.c ft_lstdel.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o

clean:
	$(CLEAN) $(OBJECTS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all
