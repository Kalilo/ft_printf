# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/04 07:15:17 by ghavenga          #+#    #+#              #
#    Updated: 2016/06/04 07:27:46 by ghavenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBHEADER = libft/libft.h
HEADER = ft_printf.h
SRC += ft_printf.c ft_put_hex.c 
SRC += ft_put_oct.c ft_put_uint.c ft_putstr_l.c ft_strlen_l.c
SRC += ft_put_bin.c ft_precision.c ft_chrpos.c ft_prschr.c
SRC += ft_prschrs.c ft_prsnbr.c ft_prsstr.c ft_parse_args.c ft_put_hash.c
OBJ = $(SRC:.c=.o)
CC = gcc -c
CFLAGS = -Wall -Werror -Wextra
	
all: $(NAME) lib

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) $(LIBHEADER) $(HEADER)
	@echo "Compiled Objects"

lib: $(NAME)
	@ar rc $(NAME) $(OBJ) $(LIBHEADER) $(HEADER)
	@echo "Compiled '.a' file"

clean:
	@rm -f $(OBJ)
	@rm -Rf $(HEADER:.h=.h.gch) $(LIBHEADER:.h=.h.gch)
	@echo "Removed Objects"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed '.a' file"
	
norme:
	@clear
	@norminette $(SRC)

re: clean all
