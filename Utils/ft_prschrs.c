/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prschrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 14:25:42 by oexall            #+#    #+#             */
/*   Updated: 2016/05/25 15:47:24 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	ft_prschrs(char **str, char *chrs)
{
	char	c;
	int		n;

	n = 0;
	c = 0;
	if (chrs && (c == **str))
	{
		while (chrs[n] != '\0')
		{
			if (c == chrs[n])
			{
				(*str)++;
				return (chrs[n]);
			}
			n++;
		}
	}
	return (0);
}
