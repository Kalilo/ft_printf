/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 07:42:20 by khansman          #+#    #+#             */
/*   Updated: 2016/05/26 16:06:05 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int ft_printf(char *str, ...);

int main(void)
{
	int a = 42, b = 21;
	unsigned int u_a = 0x8000000, u_b = 0x80000;
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
	printf("printf   : %s How are you?\n", text);
	ft_printf("ft_printf: %s How are you?\n", text);
	printf("printf   : %s %s How are you?\n", text, text);
	ft_printf("ft_printf: %s %s How are you?\n", text, text);

	ft_printf("\n::::: INTS ::::::\n");
	printf("printf   : %d <-> %i Both d & i args\n", a, b);
	ft_printf("ft_printf: %d <-> %i Both d & i args\n", a, b);
	printf("printf   : %d <-> %i Both d & i are neg args\n", -a, -b);
	ft_printf("ft_printf: %d <-> %i Both d & i are neg args\n", -a, -b);
	printf("printf   : %d <-> %i Both d & i 3 mil args\n", 3000000, 3000000);
	ft_printf("ft_printf: %d <-> %i Both d & i 3 mil args\n", 3000000, 3000000);
	printf("printf   : %d <-> %i Both d & i 3 mil neg args\n", -3000000, -3000000);
	ft_printf("ft_printf: %d <-> %i Both d & i 3 mil neg args\n", -3000000, -3000000);

	ft_printf("\n:::::  OCTALS  :::::\n");
	printf("printf   : %o <-> %O Both o & O octal nums\n", a, b);
	ft_printf("ft_printf: %o <-> %O Both o & O octal nums\n", a, b);
	printf("printf   : %o <-> %O Both o & O octal nums (/w neg args)\n", -a, -b);
	ft_printf("ft_printf: %o <-> %O Both o & O octal nums (/w neg args)\n", -a, -b);

	ft_printf("\n:::::  HEX  :::::\n");
	printf("printf   : %x <-> %X Both x & X hex nums\n", a, b);
	ft_printf("ft_printf: %x <-> %X Both x & X hex nums\n", a, b);
	printf("printf   : %x <-> %X Both x & X hex nums (/w neg args)\n", -a, -b);
	ft_printf("ft_printf: %x <-> %X Both x & X hex nums (/w neg args)\n", -a, -b);

	ft_printf("\n::::::  UNIT  ::::::\n");
	printf("printf   : %u <-> %D Both u & D unsigned int nums\n", u_a, u_b);
	ft_printf("ft_printf: %u <-> %D Both u & D unsigned int nums\n", u_a, u_b);
	printf("printf   : %u <-> %D Both u & D unsigned int nums (/w neg args)\n", 
			-u_a, -u_b);
	ft_printf("ft_printf: %u <-> %D Both u & D unsigned int nums (/w neg args)\n", 
			-u_a, -u_b);

	ft_printf("\n:::::  FLOAT  ::::::\n");
	printf("printf   : %f Float num\n", 45.55);
	//ft_printf("ft_printf: %f Float num\n", 45.55);

	ft_printf("\n:::::  PTR   :::::\n");
	int *a_ptr = &a;
	printf("printf   : %p Pointer Mem Addr\n", a_ptr);
	ft_printf("ft_printf: %p Pointer Mem Addr\n", a_ptr);
}
