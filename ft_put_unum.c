/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 11:37:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 14:42:25 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_put_unum(const long unsigned int num)
{
	if (num >= 10)
	{
		ft_put_unum(num / 10);
		ft_putchar(num % 10 + '0');
	}
	ft_putchar(num + '0');
}
