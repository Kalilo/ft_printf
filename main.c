/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 07:42:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 09:54:20 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int ft_printf(char *str, ...);

int main()
{
    int     k = 123;
    char    *str = "Hello World";

    printf("printf%%: %i, %s, %o\n", k, str, k);
    ft_printf("ft_printf%%: %i, %s, %o\n", k, str, k);

    return (0);
}
