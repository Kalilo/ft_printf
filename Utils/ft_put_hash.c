/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 11:01:51 by oexall            #+#    #+#             */
/*   Updated: 2016/05/27 13:39:18 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_put_hash(char type, char flag)
{
	size_t	len;

	len = 0;
	if (flag != '#')
		return (0);
	if (type == 'o' || type == 'O')
		len += ft_putchar('0');
	else if (type == 'x')
		len += ft_putstr_l("0x");
	else if (type == 'X')
		len += ft_putstr_l("0X");
	return (len);
}
