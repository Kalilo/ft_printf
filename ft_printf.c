#include "ft_printf.h"

size_t				ft_add_param(t_frmt *arg_frmt, double *param)
{
	size_t	len;
	char 	type;

	len = 0;
	type = arg_frmt->type;
	if (type == 'S')
		len += ft_putwstr((wchar_t *)param);
	else if (type == 'i' || type == 'd')
		len += ft_putnbr((long long int)param);
	else if (type == 's')
		len += ft_putstr_l((char *)param);
	else if (type == 'o' || type == 'O')
	{
		len += ft_put_hash(type, arg_frmt->flag);	
		len += ft_put_oct((long unsigned int)param);
	}
	else if (type == 'x' || type == 'X')
	{
		len += ft_put_hash(type, arg_frmt->flag);
		len += ft_put_hex((long unsigned int)param, (type == 'X'));
	}
	else if (type == 'c')
		len += ft_putchar((char)param);
	else if (type == 'u' || type == 'D')
		len += ft_put_uint((long unsigned int)param);
	else if (type == '%')
		len += ft_putchar('%');
	else if (type == 'p')
	{
		len += ft_putstr_l("0x7fff");
		len += ft_put_hex((unsigned int)param, 0);
	}
	else if (type == 'f')
		ft_put_float((double)*param, 6);
	else if (type == 'b')
		ft_put_bin((long long int)param);
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
			len += ft_add_param(&arg_frmt, va_arg(format, double *));
		}
		else
			len += ft_putchar(*fstr);
		fstr++;
	}
	va_end(format);
	return ((int)len);
}
