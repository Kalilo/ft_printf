#include "ft_printf.h"

size_t				ft_add_param(char type, double *param)
{
	size_t	len;

	len = 0;
	if (type == 'S')
		len += ft_putstr_l((char *)param);
	else if (type == 'i' || type == 'd')
	{
		len += ft_precision(arg_frmt.precision, (int)param);
		len += ft_putnbr((int)param);
	}
	else if (type == 's')
		len += ft_putstr_l((char *)param);
	else if (type == 'o' || type == 'O')
	{
		ft_precision(arg_frmt.precision, (int)param);
		len += ft_put_oct((long unsigned int)param);
	}
	else if (type == 'x')
	{
		ft_precision(arg_frmt.precision, (int)param);
		len += ft_put_hex((long unsigned int)param, 0);
	}
	else if (type == 'X')
	{
		ft_precision(arg_frmt.precision, (int)param);
		len += ft_put_hex((long unsigned int)param, 1);
	}
	else if (type == 'c')
		len += ft_putchar((char)param);
	else if (type == 'u' || type == 'D')
	{
		ft_precision(arg_frmt.precision, (int)param);
		len += ft_put_uint((long unsigned int)param);
	}
	else if (type == '%')
		len += ft_putchar('%');
	else if (type == 'p')
	{
		len += ft_putstr_l("0x7fff");
		len += ft_put_hex((unsigned int)param, 0);
	}
	else if (type == 'f')
		ft_precision(arg_frmt.precision, (int)param);
		ft_put_float((double)*param, 6);
	return (len);
}

int					ft_printf(const char *str, ...)
{
	size_t	len;
	va_list	format;
	char	*fstr;
	t_frmt	arg_frmt;

	va_start(format, str);
	len = 0;
	fstr = (char *)str;
	while (*fstr != '\0')
	{
		if (*fstr == '%')
		{
			fstr = ft_parse_args(&format, fstr, &arg_frmt);
			len += ft_add_param(arg_frmt.type, va_arg(format, double *));
		}
		else
			len += ft_putchar(*fstr);
		fstr++;
	}
	va_end(format);
	return ((int)len);
}
