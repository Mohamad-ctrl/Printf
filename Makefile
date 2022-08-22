# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 09:22:46 by mosharif          #+#    #+#              #
#    Updated: 2022/08/15 09:22:47 by mosharif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_nullstr.c ft_putnbr.c ft_putstr.c printhex.c printuns.c ptraddres.c
OBJ = $(SRC:.c=.o)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
all: $(NAME)
clean:
	rm -rf *.o
fclean:
	rm -rf $(OBJ) $(NAME) $(bonus-obj)
re:	fclean all

