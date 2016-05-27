/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 10:14:39 by khansman          #+#    #+#             */
/*   Updated: 2016/05/27 13:41:28 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putwstr(wchar_t *str)
{
	size_t			count;
	unsigned int	k;
	long int		l;
	unsigned int	m;

	count = 0;
	k = ft_wchar_len(str);
	if (k != 0)
		while (*str != '\0' && *str != 0)
		{
			l = 0;
			m = 0;
			while (m < k)
			{
				l += str[m];
				m++;
			}
			count += ft_putwchar(l); 
			str = str + k;
		}
	return (count);
}
