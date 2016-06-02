/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:32:02 by ghavenga          #+#    #+#             */
/*   Updated: 2016/05/27 14:36:35 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_precision(int prec, int arg)
{
	int	k;

	k = 0;
	if (prec > ft_strlen(ft_itoa(arg)))
	{
		while (k < prec + ft_strlen(ft_itoa(arg)))
			ft_putchar('0');
	}
}
