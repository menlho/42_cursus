# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:39:00 by momascle          #+#    #+#              #
#    Updated: 2023/03/08 03:30:30 by momascle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = *.o
HEADERS = *.h
SRC = ft_*.c
NAME = libft
FLAGS = -c -Wall -Wextra -Werror
COMP = gcc $(FLAGS) $(SRC)

all :
	@echo "Compiling ..."
	$(COMP)
	ar -rcs $(NAME).a $(OBJ)
	@echo "Compilation OK ! Library successfully created.\n"
clean :
	rm -rf $(OBJ)
	@echo ".o files removed\n"

fclean : clean
	rm -rf $(NAME).a
	@echo ".a and .h files removed\n"

re : fclean all
	@echo "(remake)\n"
