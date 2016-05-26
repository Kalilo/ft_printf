/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:14:16 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 15:38:19 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

size_t	ft_put_hex(const long unsigned int num, int upper)
{
	size_t	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_put_hex(num / 16, upper);
		if (num % 16 < 10)
			len += ft_putchar(num % 16 + '0');
		else if (upper)
			len += ft_putchar(num % 16 - 10 + 'A');
		else
			len += ft_putchar(num % 16 - 10 + 'a');
	}
	else
	{
		if (num % 16 < 10)
			len += ft_putchar(num + '0');
		else if (upper)
			len += ft_putchar(num - 10 + 'A');
		else
			len += ft_putchar(num - 10 + 'a');
	}
	return (len);
}
