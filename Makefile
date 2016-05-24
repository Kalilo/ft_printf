# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:29:00 by ghavenga          #+#    #+#              #
#    Updated: 2016/05/24 15:46:27 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_test
HEADER = ft_printf.h
SRC = ft_printf.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
	
all: $(NAME)

$(NAME):
		$(CC) -o $(NAME) $(CFLAGS) $(SRC) $(HEADER)

clean:
		rm -f $(NAME)

re: clean all
