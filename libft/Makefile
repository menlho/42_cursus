# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:39:00 by momascle          #+#    #+#              #
#    Updated: 2023/03/08 02:51:56 by momascle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = *.o
HEADERS = *.h
SRC = ft_*.c
NAME = libft
FLAGS = -c -o $(NAME) -Wall -Wextra -Werror
COMP = gcc $(FLAGS) $(HEADERS) $(SRC)

all :
	@echo "Compiling ..."
	$(COMP)
	ar -crs $(NAME).a $(OBJ)
	@echo "Compilation OK ! Library successfully created.\n"
clean :
	rm -rf $(OBJ)
	@echo ".o files removed\n"

fclean : clean
	rm -rf $(NAME).a
	@echo ".a files removed\n"

re : fclean all
	@echo "(remake)\n"

