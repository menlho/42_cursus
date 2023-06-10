# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momascle <momascle@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:39:00 by momascle          #+#    #+#              #
#    Updated: 2023/06/10 20:25:25 by momascle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strlen.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c
FILES = $(SRC:.c=.o)
BONUS_FILES = $(BONUS_SRC:.c=.o)
COMP = gcc

all: $(NAME)

.c.o :
	$(COMP) $(FLAGS) -c -include libft.h $< -o $(<:.c=.o)

$(NAME) : $(FILES);
	ar cr $@ $(FILES)
	ranlib $@

bonus: $(BONUS_SRC)
	$(COMP) $(FLAGS) -c $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_FILES)
	ranlib $(NAME)

clean:
	rm -rf $(FILES)
	rm -rf $(BONUS_FILES)

fclean: clean
	rm -rf $(NAME)
	rm -rf libft.so

re: fclean all

so:
	$(COMP) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(FILES) $(BONUS_FILES)

