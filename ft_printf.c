/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 07:54:06 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 13:03:49 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_add_param(char type, void *param)
{
	if (type == 'S')
		//ft_putstr_l((long char *)param);
	else if (type == 'i' || type == 'd')
		ft_putnbr((int)param);
	else if (type == 's')
		ft_putstr((char *)param);
	else if (type == 'o')
		ft_put_oct((long unsigned int)param);
	else if (type == 'x' || type == 'X')
		ft_put_hex((long unsigned int)param);
	else if (type == 'c')
		ft_putchar((char)param);
	else if (type == 'u')
		ft_put_uint((long unsigned int)param);
}

int					ft_printf(const char *str, ...)
{
	va_list			format;
	unsigned int	k;
	int				insert;

	k = 0;
	insert = 0;
	va_start(format, str);
	while (str[k] != '\0')
	{
		if (str[k] == '%' && insert == 0)
			insert = 1;
		else if (insert == 1 && str[k] != '%')
		{
			ft_add_param(str[k], va_arg(format, void *));
			insert = 0;
		}
		else if (insert == 1 && str[k] == '%')
		{
			ft_putchar('%');
			insert = 0;
		}
		else
			ft_putchar(str[k]);
		k++;
	}
	va_end(format);
	return (1);
}
