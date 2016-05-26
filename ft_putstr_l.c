/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 08:48:24 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 14:11:45 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void    ft_putstr_l(const long int *s)
{
    *s--;
    while (*s++ != '\0')
        ft_putchar(s[k]);
}
