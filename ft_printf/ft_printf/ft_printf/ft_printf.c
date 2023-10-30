/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 23:17:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_spec(va_list args, const char spec)
{
	if (spec == 'c')
		return (ft_putchar_len(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr_len(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_pointer(va_arg(args, unsigned long long)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnumb_len(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x' || spec == 'X')
		return (ft_hex(va_arg(args, unsigned int), spec));
	else if (spec == '%')
		return (ft_putchar_len('%'));
	return (0);
}
/*spec = specifier. */

int	ft_printf(const char *spec, ...)
{
	va_list		args;
	size_t		i;
	int			len;

	if (!spec)
		return (-1);
	va_start(args, spec);
	i = 0;
	len = 0;
	while (spec[i])
	{
		if (spec[i] == '%')
		{
			len += ft_printf_spec(args, spec[i + 1]);
			i++;
		}
		else
			len += ft_putchar_len(spec[i]);
		i++;
	}
	va_end(args);
	return (len);
}
