/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char-str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:04:36 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:42 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  PRINT CHARACTER WITH FORMATTING FUNCTION  ------------------ */
/*
 * This function prints a character with formatting based on the provided
 * format.
 * It takes as parameters a character (c) and a pointer to a t_format structure
 * (format).
 * The function initializes a counter (wr_count) to keep track of the number of
 * characters written.
 * The padding character (pad) is set to ' '.
 * If the minus flag is set in the format, the function first writes the
 * character to the standard output, and then writes ' ' characters to the
 * standard output until the field width is met.
 * If the minus flag is not set in the format, the function first writes ' '
 * characters to the standard output until the field width is met, and then
 * writes the character to the standard output.
 * The function returns the total number of characters written.
 */
int	ft_print_char(int c, t_format *format)
{
	char	pad;
	int		wr_count;

	wr_count = 0;
	pad = ' ';
	if (format->minus)
	{
		wr_count += write(1, &c, 1);
		while (format->field_width-- > 1)
			wr_count += write(1, &pad, 1);
	}
	else
	{
		while (format->field_width-- > 1)
			wr_count += write(1, &pad, 1);
		wr_count += write(1, &c, 1);
	}
	return (wr_count);
}

/* ------------  PRINT STRING WITH FORMATTING FUNCTION  --------------------- */
/*
 * This function prints a string with formatting based on the provided format.
 * It takes as parameters a string (stri) and a pointer to a t_format structure
 * (format).
 * If the input string is NULL, the function sets it to a constant NULLSTRING.
 * The function calculates the length of the string.
 * If the precision specified in the format is non-negative and less than the
 * length of the string, the function adjusts the length to the precision.
 * If the minus flag is set in the format, the function first writes the string
 * to the standard output, and then writes ' ' characters to the standard output
 * until the field width is met.
 * If the minus flag is not set in the format, the function first writes ' '
 * characters to the standard output until the field width is met, and then
 * writes the string to the standard output.
 * The function returns the total number of characters written.
 */
int	ft_print_str(char *stri, t_format *format)
{
	int		wr_count;
	int		len;
	char	*str;

	if (stri == NULL)
		str = NULLSTRING;
	else
		str = stri;
	len = ft_strlen(str);
	if (format->precision >= 0 && format->precision < len)
		len = format->precision;
	if (format->minus == 1)
	{
		wr_count = write(1, str, len);
		while (format->field_width > wr_count)
			wr_count += write(1, " ", 1);
	}
	else
	{
		wr_count = 0;
		while (format->field_width-- > len)
			wr_count += write(1, " ", 1);
		wr_count += write(1, str, len);
	}
	return (wr_count);
}
