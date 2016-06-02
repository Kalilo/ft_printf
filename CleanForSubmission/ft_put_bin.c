/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:24:09 by khansman          #+#    #+#             */
/*   Updated: 2016/05/27 09:46:29 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_bin(const long long unsigned int num)
{
	size_t	len;

	len = 0;
	if (num >= 2)
	{
		len += ft_put_uint(num / 2);
		len += ft_putchar(num % 2 + '0');
	}
	else
		len += ft_putchar(num + '0');
	return (len);
}
