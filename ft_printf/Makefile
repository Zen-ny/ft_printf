# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naadam <naadam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 14:18:11 by naadam            #+#    #+#              #
#    Updated: 2023/02/08 20:27:04 by naadam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbru.c ft_putstr.c ft_strlen.c  ft_cases.c \
	ft_hex.c ft_ptr.c ft_putnbr.c\

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = ./ft_printf.h

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

make re: fclean all

.PHONY: clean fclean all re printf