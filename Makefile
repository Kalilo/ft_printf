# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:29:00 by ghavenga          #+#    #+#              #
#    Updated: 2016/05/25 08:51:36 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_test
SRC = ft_printf.c *.c libft/libft.a libft.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
	
all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC)

clean:
		rm -f $(NAME)

re: clean all
