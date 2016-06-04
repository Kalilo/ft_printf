/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 15:00:04 by oexall            #+#    #+#             */
/*   Updated: 2016/06/04 07:19:02 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prsstr(char **str, char *cmp)
{
	int		n;
	char	*tmp;

	n = 0;
	if (cmp && (tmp = *str))
	{
		while (tmp[n] != '\0' && cmp[n] != '\0')
		{
			if (tmp[n] != cmp[n])
				return (tmp[n] - cmp[n]);
			n++;
		}
		*str = &tmp[n];
	}
	return (0);
}
