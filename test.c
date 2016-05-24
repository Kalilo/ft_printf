/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 08:48:23 by khansman          #+#    #+#             */
/*   Updated: 2016/05/23 13:58:27 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void    foo(char *fmt, ...)
{
    va_list ap/*, ap2*/;
    int d;
    char c, *s;

    va_start(ap, fmt);
    //va_copy(ap2, ap);
    while (*fmt)
        switch(*fmt++)
        {
            case 's':                       /* string */
                s = va_arg(ap, char *);
                printf("string %s\n", s);
                break;
            case 'd':                       /* int */
                d = va_arg(ap, int);
                printf("int %d\n", d);
                break;
            case 'c':                       /* char */
                /* Note: char is promoted to int.*/
                c = va_arg(ap, int);
                printf("char %c\n", c);
                break;
        }
    va_end(ap);
   // ...
   //     /* use ap2 to iterate over the arguments again*/
   // ...
   // va_end(ap2);
}

int main()
{
    int     k = 10;
    char    *s = "Hello World";
    int     l = 42;

    //foo("k = %i; s= %s; l = %i", k, s, l);
    foo("ccs", k, l, s);
    return (0);
}
