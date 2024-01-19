/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:23:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:35:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Custom implementation of the printf function.
 *
 * @param frmt The format string.
 *
 * @return The number of characters printed.
 */
int	ft_printf(const char *frmt, ...)
{
	va_list		args;
	t_format	*format;
	int			len;
	int			i;

	i = 0;
	len = 0;
	va_start(args, frmt);
	while (frmt && frmt[i])
	{
		if (frmt[i] == '%')
		{
			i++;
			format = ft_parse_format_specifier(frmt, &i);
			len += ft_handle_specifier(format, args);
			free(format);
		}
		else
			len += write(1, &frmt[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
