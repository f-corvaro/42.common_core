/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:23:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  HANDLE FORMAT SPECIFIER FUNCTION  -------------------------- */
/*
 * This function handles the format specifier in format string.
 * It takes as parameters a pointer to a t_format structure (format) and a
 * variable argument list (args).
 * The function first retrieves the format specifier from the format structure.
 * Depending on the format specifier, the function calls the appropriate
 * function to print the next argument in the argument list with the specified
 * format:
 * - 'c': ft_print_char
 * - 's': ft_print_str
 * - 'p': ft_print_ptr
 * - 'd' or 'i': ft_print_int
 * - 'u': ft_print_ui
 * - 'x' or 'X': ft_print_hex
 * - '%': writes a '%' character to the standard output
 * Each print function returns the number of characters written.
 * If the format specifier is not recognized, the function returns 0.
 */
int	ft_handle_specifier(t_format *format, va_list args)
{
	int	spec;

	spec = format->specifier;
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int), format));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *), format));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long int), 0, format));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_int(va_arg(args, int), format));
	else if (spec == 'u')
		return (ft_print_ui(va_arg(args, unsigned int), format));
	else if (spec == 'x' || spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), spec == 'X', format));
	else if (spec == '%')
		return (write(1, "%", 1));
	return (0);
}

/* ------------  FT_PRINTF FUNCTION  ---------------------------------------- */
/*
 * This function mimics the behavior of the printf function.
 * It takes as parameters a format string (frmt) and a variable number of
 * arguments.
 * The function initializes a variable argument list (args) and a
 * t_format structure (format).
 * It also initializes a counter (i) to keep track of the current position in
 * the format string, and a counter (len) to keep track of the total number of
 * characters written.
 * The function then iterates over the format string. If it encounters a '%',
 * it parses the format specifier and calls the ft_handle_specifier function to
 * print the next argument in the argument list with the specified format. The
 * number of characters written is added to len.
 * If it encounters a character other than '%', it writes the character to the
 * standard output and increments len.
 * After all arguments have been processed, the function ends the variable
 * argument list and returns the total number of characters written.
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
