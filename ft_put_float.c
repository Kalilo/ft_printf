/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 13:10:14 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 13:55:32 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

static int	ft_trunc(long int num)
{
	return (num);
}

static void	ft_put_dec(long double num, unsigned int dec)
{
	if (num >= 1)
		num = num - ft_trunc(num);
	if (dec > 0)
	{
		ft_putchar(num * 10 + '0');
		ft_put_dec(num * 10, dec--);
	}
}

void		ft_put_float(long double num, unsigned int dec)
{
	if (num < 0)
		{
			ft_putchar('-');
			ft_put_float(-num, dec);
		}
	else if (num >= 10)
	{
		ft_put_float(num / 10, dec);
		ft_putchar(ft_trunc(num) % 10 + '0');
	}
	else if (1 > num && num > 0 && dec > 0)
	{
		ft_putchar('.');
		ft_put_dec(num, dec);
	}
	else
	ft_putchar(num + '0');
}
