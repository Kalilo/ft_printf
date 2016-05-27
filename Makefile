MAIN = main_v2.c #REMOVE THIS LATER
NAME = ft_printf_test
SRC = $(SRC1) $(SRC2) $(SRC3)
SRC1 = ft_printf.c ft_printf.h ft_put_hex.c libft/libft.a libft/libft.h
SRC2 = ft_put_oct.c ft_put_uint.c ft_putstr_l.c ft_strlen_l.c ft_put_float.c
SRC3 = Utils/ft_chrpos.c \
	   Utils/ft_prschr.c \
	   Utils/ft_prschrs.c \
	   Utils/ft_prsnbr.c \
	   Utils/ft_prsstr.c \
	   ft_parse_args.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
	
all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) $(MAIN)

clean:
		rm -f $(NAME)

re: clean all
