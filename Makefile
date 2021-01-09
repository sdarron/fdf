# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/31 19:46:13 by sdarron           #+#    #+#              #
#    Updated: 2020/02/03 22:28:40 by sdarron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FRAMEWORK = -framework OpenGL -framework AppKit

GCC = gcc

LIB = libft/libft.a minilibx_macos/libmlx.a

SRCS =	picture.c \
		func.c \
		main.c \
		readmap.c \
		free.c \

FLAGS = -Wall -Wextra -Werror

OBJ = $(patsubst %.c, %.o, $(SRCS))

all:	$(NAME)

$(OBJ):	$(SRCS)
		@$(GCC) $(FLAGS) -c $(SRCS)

$(NAME): $(OBJ)
		make -C ./libft/
		make -C ./minilibx_macos/
		@$(GCC) $(OBJ) $(LIB) $(FRAMEWORK) -o $(NAME)

clean:
		@/bin/rm -f $(OBJ)
		@/bin/rm -f libft/*.o
		@/bin/rm -f minilibx_macos/*.o

fclean: clean
		@/bin/rm -f $(NAME)
		@/bin/rm -f libft/libft.a
		
re: fclean all

.PHONY: all clean fclean re