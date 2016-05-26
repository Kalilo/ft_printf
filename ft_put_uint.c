/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 11:37:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 08:13:27 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_put_uint(const long unsigned int num)
{
	if (num >= 10)
	{
		ft_put_uint(num / 10);
		ft_putchar(num % 10 + '0');
	}
	ft_putchar(num + '0');
}
