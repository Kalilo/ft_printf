/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:14:16 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 08:42:42 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_put_hex(const long unsigned int num, int upper)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, upper);
		if (num % 16 < 10)
			ft_putchar(num % 16 + '0');
		else if (upper)
			ft_putchar(num % 16 - 10 + 'A');
		else
			ft_putchar(num % 16 - 10 + 'a');
	}
	else
	{
		if (num % 16 < 10)
			ft_putchar(num + '0');
		else if (upper)
			ft_putchar(num - 10 + 'A');
		else
			ft_putchar(num - 10 + 'a');
	}
}
