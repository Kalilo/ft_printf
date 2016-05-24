/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 07:42:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/24 08:04:10 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_printf(char *str, ...);

int main()
{
    int     k = 123;
    char    *str = "Hello World";

    printf("Origonal%%: %i, %s\n", k, str);
    ft_printf("Mine%%: %i, %s\n", k, str);

    return (0);
}
