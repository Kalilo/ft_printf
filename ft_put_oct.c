/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 09:17:44 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 15:44:48 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

size_t	ft_put_oct(const long unsigned int n)
{
	size_t	len;

	len = 0;
	if (n >= 8)
	{
		len += ft_put_oct(n / 8);
		len += ft_putchar(n % 8 + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
