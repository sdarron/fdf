# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 23:19:27 by sdarron           #+#    #+#              #
#    Updated: 2020/01/23 19:23:33 by sdarron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_putchar.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_strclr.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_strnequ.c \
	   ft_striteri.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_itoa.c \
	   ft_strrev.c \
	   ft_strsplit.c \
	   ft_quicksort.c \
	   ft_arrmax.c \
	   ft_arrmin.c \
	   ft_qsortindex.c \
	   ft_lstadd.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_get_next_line.c \

HEADERS = libft.h

FLAGS = -Wall -Wextra -Werror

OBJ = $(patsubst %.c, %.o, $(SRCS))

all:	$(NAME)

%.o:	%.c
		@$(GCC) $(FLAGS) -c $< -o$@

$(NAME): $(OBJ) $(HEADERS)
		@$(GCC) $(FLAGS) -c $(SRCS)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
