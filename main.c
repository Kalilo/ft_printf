/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 07:42:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 09:41:09 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int ft_printf(char *str, ...);

int main(void)
{
	char c = 'A';
	char *text = "Hey Greg!";

	ft_printf("\n:::::   BASICS   :::::\n");
	printf("printf   : This is a test with no arguments, just plain text\n");
	ft_printf("ft_printf: This is a test with no arguments, just plain text\n");
	printf("printf   : %% double %% give only one %%\n");
	ft_printf("ft_printf: %% double %% give only one %%\n");

	ft_printf("\n:::::   CHARS  :::::\n");
	printf("printf   : %c just one char\n", c);
	ft_printf("ft_printf: %c just a one char\n", c);

	printf("printf   : %c %c just two chars\n", c, c);
	ft_printf("ft_printf: %c %c just two chars\n", c, c);
	
	printf("printf   : %c %c %c just three chars\n", c, c, c);
	ft_printf("ft_printf: %c %c %c just three chars\n", c, c, c);

	ft_printf("\n:::::  STRINGS  ::::::\n");
	printf("printf:  : %s How are you?\n", text);
	ft_printf("ft_printf: %s How are you?\n", text);
}
