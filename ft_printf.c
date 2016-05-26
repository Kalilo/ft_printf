#include "ft_printf.h"

void				ft_add_param(char type, void *param)
{
	if (type == 'S')
		ft_putstr_l(param);
	else if (type == 'i' || type == 'd')
		ft_putnbr((int)param);
	else if (type == 's')
		ft_putstr((char *)param);
	else if (type == 'o')
		ft_put_oct((long unsigned int)param);
	else if (type == 'x')
		ft_put_hex((long unsigned int)param, 0);
	else if (type == 'X')
		ft_put_hex((long unsigned int)param, 1);
	else if (type == 'c')
		ft_putchar((char)param);
	else if (type == 'u')
		ft_put_uint((long unsigned int)param);
	else if (type == 'f')
		ft_put_float((float)param, 6);
}

int					ft_printf(const char *str, ...)
{
	va_list	format;
	char	*fstr;
	t_frmt	arg_frmt;

	va_start(format, str);
	fstr = (char *)str;
	while (*fstr != '\0')
	{
		if (*fstr == '%')
		{
			fstr = ft_parse_args(&format, fstr, &arg_frmt);
			ft_add_param(arg_frmt.type, va_arg(format, void *));
		}
		else
			ft_putchar(*fstr);
		fstr++;
	}
	va_end(format);
	return (1);
}
