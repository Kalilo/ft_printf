/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 13:52:33 by oexall            #+#    #+#             */
/*   Updated: 2016/05/27 12:43:16 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_parse_args(va_list *format, char *str, t_frmt *arg_frmt)
{
	if (*str == '%')
		str++;
	arg_frmt->flag = ft_prschrs(&str, "#0- +");
	ft_parse_wildchar(format, &str, &(arg_frmt->width));
	if (arg_frmt->width < 0)
	{
		arg_frmt->width = -(arg_frmt->width);
		arg_frmt->opt_plus_minus = 1;
	}
	if (ft_prschr(&str, '.'))
		ft_parse_wildchar(format, &str, &(arg_frmt->precision));
	else
		arg_frmt->precision = -1;
	if (ft_prsstr(&str, "hh") == 0)
		arg_frmt->modifier = 11;
	else if (ft_prsstr(&str, "ll") == 0)
		arg_frmt->modifier = 12;
	else if ((arg_frmt->modifier = ft_chrpos(*str, "hljz")) != -1)
		(*str)++;
	arg_frmt->type = *str;
	return (str);
}

int		ft_parse_wildchar(va_list *format, char **str, int *dst)
{
	int	res;

	if (**str == '*')
	{
		*dst = va_arg(*format, int);
		(*str)++;
	}
	else if (!(ft_prsnbr(str, dst)))
		return (0);
	if (ft_parse_wildchar(format, str, &res))
		*dst = res;
	return (1);
}
