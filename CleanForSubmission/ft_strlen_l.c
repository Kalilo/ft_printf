/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 08:23:47 by khansman          #+#    #+#             */
/*   Updated: 2016/05/27 13:31:43 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlen_l(const char *str)
{
	unsigned long int	k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}
