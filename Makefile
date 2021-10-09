# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spzona <spzona@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 18:26:43 by spzona            #+#    #+#              #
#    Updated: 2021/10/09 18:40:39 by spzona           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra 

NAME = libft.a

all: $(NAME)

SRC = ft_isalpha.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_toupper.c ft_substr.c \
		ft_atoi.c    ft_isascii.c ft_memcpy.c  ft_strcpy.c  ft_strncmp.c ft_strjoin.c \
		ft_bzero.c   ft_isdigit.c ft_memmove.c ft_strdup.c  ft_strnstr.c \
		ft_calloc.c  ft_isprint.c ft_memset.c  ft_strlcat.c ft_strrchr.c \
		ft_isalnum.c ft_memchr.c  ft_putchar.c ft_strlcpy.c ft_tolower.c 

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@echo "$(NAME) created"
		@ranlib $(NAME)
		@echo "$(NAME) indexed"

%.o: %.c 
		@gcc $(FLAG) -c $< -o $@

clean:
		@rm -f $(OBJ)
		@echo "OBJ deleted"

fclean: clean
		@rm -f $(NAME)
		@echo "OBJ deleted"
	
re: fclean all

.PHONY: all, clean, fclean, re