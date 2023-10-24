/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/24 19:50:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	size_t	i;
	int		len;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len +=  /*ft_printf_arg(args, format[i + 1])*/;
			i++;
		}
		else
			len += /*ft_putchar(format[i])*/;
		i++;
	}
	va_end(list);
	return(len);
}