/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:14:16 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 10:40:50 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_put_hex(const long unsigned int num)
{
	if (num >= 16)
	{
		ft_put_hex(n / 16);
		if (num % 16 < 10)
			ft_putchar(num % 16 + '0');
		else
			ft_putchar(num % 16 - 10 + 'A');
	}
	else
		if (n % 16 < 10)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'A');
}
