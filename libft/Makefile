# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:39:00 by momascle          #+#    #+#              #
#    Updated: 2023/04/11 21:09:55 by momascle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = 	ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_strlen.o \
		ft_isprint.o ft_toupper.o ft_tolower.o ft_atoi.o \
		ft_memset.o  ft_bzero.o ft_memcpy.o ft_memmove.o \
		ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o \
		ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
		ft_calloc.o ft_strdup.o
SRC = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strlen.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c
NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror
COMP = gcc

so:
	$(COMP) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

all :
	@echo "Compiling ..."
	$(COMP) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)
	@echo "Compilation OK ! Library successfully created.\n"
clean :
	rm -rf $(OBJ)
	@echo ".o files removed\n"

fclean : clean
	rm -rf $(NAME)
	@echo ".a and removed\n"

re : fclean all
	@echo "(remake)\n"
