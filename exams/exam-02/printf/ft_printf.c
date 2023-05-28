#include <unistd.h>
#include <stdarg.h>

void	p_s(char *s, int *len)
{
	if (!s)
		s = "(null)";
	while (*s)
		*len += write(1, s++, 1);
}

void	p_d(long long int nb, int base, int *len)
{
	char	*hex = "0123456789abcdef";

	if (nb < 0)
	{
		nb *= -1;
		*len += write(1, "-", 1);
	}
	if (nb >= base)
		p_d((nb / base), base, len);
	*len += write(1, &hex[nb % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int	len;

	len = 0;
	va_list pointer;
	va_start(pointer, format);
	
	while (*format)
	{
		if ((*format == '%') && ((*(format + 1) == 's') || (*(format + 1) == 'd') || (*(format + 1) == 'x')))
		{
			format++;
			if (*format == 's')
				p_s(va_arg(pointer, char *), &len);
			else if (*format == 'd')
				p_d((long long int)va_arg(pointer, int), 10, &len);
			else if (*format == 'x')
				p_d((long long int)va_arg(pointer, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return(va_end(pointer), len);
}
