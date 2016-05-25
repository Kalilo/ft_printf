/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:14:16 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 10:22:04 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_hex(const long unsigned int num)
{
	else if (n >= 16)
	{
		ft_putnbr(n / 16);
		if (n % 16 < 10)
			ft_putchar(n % 16 + '0');
		else
			ft_putchar(n % 16 - 10 + 'A');
	}
	else
		if (n % 16 < 10)
			ft_putchar(n % 16 + '0');
		else
			ft_putchar(n % 16 - 10 + 'A');
}
