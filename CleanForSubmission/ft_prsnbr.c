/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 14:39:31 by oexall            #+#    #+#             */
/*   Updated: 2016/06/04 07:18:45 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prsnbr(char **str, int *nbr)
{
	int		i;
	int		lnbr;
	int		sign;
	char	*tmp;

	i = 0;
	lnbr = 0;
	sign = 1;
	if (str && (tmp = *str))
	{
		if (*tmp == '-' || *tmp == '+')
		{
			sign = (*tmp == '-') ? -1 : 1;
			tmp++;
		}
		while (tmp[i] >= '0' && tmp[i] <= '9')
		{
			lnbr = lnbr * 10 + (tmp[i] - '0');
			i++;
		}
		*nbr = (lnbr * sign);
		*str = &tmp[i];
		return (i > 0);
	}
	return (0);
}
