/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:26:04 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 16:02:59 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>

# define MDF_HH 11
# define MDF_LL 12
# define MDF_H 0
# define MDF_L 1
# define MDF_J 2
# define MDF_Z 3

# define PARAMS va_list *format, char *str, t_frmt *arg_frmt

typedef struct		s_frmt
{
	char	type;
	char	flag;
	int		width;
	int		opt_plus_minus;
	int		precision;
	int		modifier;
}					t_frmt;

int					ft_parse_wildchar(va_list *format, char **str, int *dst);
int					ft_chrpos(char c, char *str);
int					ft_prschr(char **str, char c);
char				ft_prschrs(char **str, char *chrs);
int					ft_prsnbr(char **str, int *nbr);
int					ft_prsstr(char **str, char *cmp);
int					ft_parse_wildchar(va_list *format, char **str, int *dst);
char				*ft_parse_args(PARAMS);
unsigned long int	ft_strlen_l(const long int *str);
void				ft_putstr_l(const long int *str);
void				ft_put_hex(long unsigned int num);
void				ft_put_oct(long unsigned int num);
void				ft_put_uint(unsigned int num);

#endif
