/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:26:04 by khansman          #+#    #+#             */
/*   Updated: 2016/05/25 10:33:45 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF

# include "/libft/libft.h"
#include <stdarg.h>

unsigned long int	ft_strlen_l(const long char *str);
void				ft_put_hex(long unsigned int num);
void				ft_put_oct(long unsigned int num);

#endif
