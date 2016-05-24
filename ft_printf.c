/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 07:54:06 by khansman          #+#    #+#             */
/*   Updated: 2016/05/24 16:42:15 by ghavenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

void 				ft_add_param(char type, void *param)
{
    if (type == 'S')
        ft_putstr_l((long char *)param);
    else if (type == 'i')
        ft_putnbr((int)param);
    else if (type == 's')
        ft_putstr((char *)param);
}

int					ft_printf(const char *str, ...)
{
    va_list         format;
    unsigned int    k;
    int             insert;

    k = 0;
    insert = 0;
    va_start(format, str);
    while (str[k] != '\0')
    {
        if (str[k] == '%' && insert == 0)
            insert = 1;
        else if (insert == 1 && str[k] != '%')
        {
            ft_add_param(str[k], va_arg(format, void *));
            insert = 0;
        }
        else if (insert == 1 && str[k] == '%')
        {
            ft_putchar('%');
            insert = 0;
        }
        else
            ft_putchar(str[k]);
        k++;
    }
    va_end(format);
    return (1);
}
