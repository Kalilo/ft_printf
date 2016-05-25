/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:26:04 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 13:57:34 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>

typedef struct		s_frmt
{
	char	type;
	char	flag;
	int		width;
	int		opt_plus_minus;
	int		precision;
	int		modifier;
}					t_frmt;

unsigned long int	ft_strlen_l(const long char *str);
void				ft_put_hex(long unsigned int num);
void				ft_put_oct(long unsigned int num);

#endif
