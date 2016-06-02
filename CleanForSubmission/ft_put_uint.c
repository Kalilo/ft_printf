/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 11:37:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 15:49:22 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

size_t	ft_put_uint(const long long unsigned int num)
{
	size_t	len;

	len = 0;
	if (num >= 10)
	{
		len += ft_put_uint(num / 10);
		len += ft_putchar(num % 10 + '0');
	}
	else
		len += ft_putchar(num + '0');
	return (len);
}
