/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:32:02 by ghavenga          #+#    #+#             */
/*   Updated: 2016/06/02 09:04:48 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_precision(size_t prec, size_t arg)
{
	size_t	k;

	k = 0;
	if (prec > ft_strlen(ft_itoa(arg)))
	{
		while (k < prec + ft_strlen(ft_itoa(arg)))
			ft_putchar('0');
	}
}
