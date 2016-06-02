/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:39:30 by khansman          #+#    #+#             */
/*   Updated: 2016/06/02 08:40:03 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_wchar_len(wchar_t *ws)
{
	wchar_t		c;
	wint_t		i;

	i = 0;
	i = (wint_t)ws;
	c = (wchar_t)i;
	if (c < 128)
		return (1);
	if (c < 2048)
		return (2);
	if (c < 65536)
		return (3);
	if (c < 1114112)
		return (4);
	return (0);
}
