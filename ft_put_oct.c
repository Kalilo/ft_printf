/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 09:17:44 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 10:30:22 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_oct(const long unsigned int num)
{
	else if (n >= 8)
	{
		ft_putnbr(n / 8);
		ft_putchar(n % 8 + '0');
	}
	else
		ft_putchar(n + '0');
}
