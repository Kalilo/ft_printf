/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 06:33:46 by oexall            #+#    #+#             */
/*   Updated: 2016/05/27 13:15:28 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	main(void)
{
	char c = 'A';
	char *name = "Hey GREG!!";
	int a = 42, b = 21;
	unsigned int u_a = 0x800000, u_b = 0x400000;

	ft_printf("\n:::::  BASICS  :::::\n");
	printf("\t\tLen: %d\n", printf("printf   :Basic Text Only"));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf:Basic Text Only"));
	printf("\t\tLen: %d\n", printf("printf   :Two %%%% gives one %%"));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf:Two %%%% gives one %%"));

	ft_printf("\n:::::  CHARS  :::::\n");
	printf("\t\t\tLen: %d\n", printf("printf   : char > %c", c));
	ft_printf("\t\t\tLen: %d\n", ft_printf("ft_printf: char > %c", c));
	printf("\t\tLen: %d\n", printf("printf   : char x2 > %c %c", c, c));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: char x2 > %c %c", c, c));
 	printf("\t\tLen: %d\n", printf("printf   : char x3 > %c %c %c", c, c, c));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: char x3 > %c %c %c", c, c, c));  

	ft_printf("\n::::: STRINGS :::::\n");
	printf("\t\tLen: %d\n", printf("printf   : str > %s", name));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: str > %s", name));  
	printf("\tLen: %d\n", printf("printf   : str > %s %s", name, name));
	ft_printf("\tLen: %d\n", ft_printf("ft_printf: str > %s %s", name, name)); 

	ft_printf("\n::::: INTS (d & i)  :::::\n");
	printf("\t\tLen: %d\n", printf("printf   : Int > %d & %i", a, b));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: Int > %d & %i", a, b));
	printf("\t\tLen: %d\n", printf("printf   : Int Neg > %d & %i", -a, -b));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: Int Neg > %d & %i", -a, -b));
	printf("\tLen: %d\n", printf("printf   : Int Neg > %d & %i", 3000000, 3000000));
	ft_printf("\tLen: %d\n", ft_printf("ft_printf: Int Neg > %d & %i", 3000000, 3000000));
	printf("Len: %d\n", printf("printf   : Int Neg > %d & %i", -3000000, -3000000));
	ft_printf("Len: %d\n", ft_printf("ft_printf: Int Neg > %d & %i", -3000000, -3000000));

	ft_printf("\n:::::  OCTALS (o & O) :::::\n");
	printf("\t\t\tLen: %d\n", printf("printf   :Octals %o & %O", a, b));
	ft_printf("\t\t\tLen: %d\n", ft_printf("ft_printf:Octals %o & %O", a, b));
	printf("\tLen: %d\n", printf("printf   :Octals Neg %o & %O", -a, -b));
	ft_printf("\tLen: %d\n", ft_printf("ft_printf:Octals Neg %o & %O", -a, -b));
	printf("\t\t\tLen: %d\n", printf("printf   :Octals f:# %#o & %#O", a, b));
	ft_printf("\t\t\tLen: %d\n", ft_printf("ft_printf:Octals f:# %#o & %#O", a, b));

	ft_printf("\n::::: HEX (x & X)  :::::\n");
	printf("\t\t\tLen: %d\n", printf("printf   :Hex %x & %X", a, b));
	ft_printf("\t\t\tLen: %d\n", ft_printf("ft_printf:Hex %x & %X", a, b));
	printf("\tLen: %d\n", printf("printf   :Hex Neg %x & %X", -a, -b));
	ft_printf("\tLen: %d\n", ft_printf("ft_printf:Hex Neg %x & %X", -a, -b));
	printf("\t\tLen: %d\n", printf("printf   :Hex f:# %#x & %#X", a, b));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf:Hex f:# %#x & %#X", a, b));

	ft_printf("\n::::::  PTR (p)  ::::::\n");
	int *a_ptr = &a;
	printf("\t\tLen: %d\n", printf("printf   : %p", a_ptr));
	ft_printf("\t\tLen: %d\n", ft_printf("ft_printf: %p", a_ptr));

	//ft_printf("\n::::: FLOAT (f) ::::::\n");
	//printf("\t\t\tLen: %d\n", printf("printf   : %f", 2.54567));
	//ft_printf("\t\t\tLen: %d\n", ft_printf("ft_printf: %f", 2.54567));

	ft_printf("\n::::: UNIT (u & D) :::::\n");
	printf("\t\t\n\t\tLen: %d\n", printf("printf   : uint %u & %D", u_a, u_b));
	ft_printf("\t\tLen: %d\n", printf("ft_printf: uint %u & %D", u_a, u_b));
}
