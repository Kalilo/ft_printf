# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:29:00 by ghavenga          #+#    #+#              #
#    Updated: 2016/05/25 15:17:38 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_test
SRC = $(SRC1) $(SRC2)
SRC1 = ft_printf.c ft_printf.h ft_put_hex.c libft/libft.a libft/libft.h
SRC2 = ft_put_oct.c ft_put_unum.c ft_putstr_l.c ft_strlen_l.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
	
all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC)

clean:
		rm -f $(NAME)

re: clean all
