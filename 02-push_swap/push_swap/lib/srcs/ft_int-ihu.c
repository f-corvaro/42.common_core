/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int-ihu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:06:49 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 17:46:15 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  PRINT INTEGER WITH FORMATTING FUNCTION  -------------------- */
/*
 * This function prints an integer with formatting based on the provided format.
 * It takes as parameters an integer (n) and a pointer to a t_format structure
 * (format).
 * If the integer is 0 and the precision specified in the format is 0,
 *  the function allocates a string of size 1 and initializes it to '\0'.
 * Otherwise, the function converts the integer to a string using the
 * ft_itoa function.
 * The function then applies precision formatting, sign or space prefix,
 * and field width formatting to the string, in that order.
 * The function writes the formatted string to the standard output and
 * calculates the length of the string.
 * The function then frees the string and returns the length.
 */
int	ft_print_int(int n, t_format *format)
{
	int		len;
	char	*str;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
		str = ft_itoa(n);
	str = ft_precision_formatting(str, format);
	str = ft_sign_space_prefix(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

/* ------------  PRINT HEXADECIMAL WITH FORMATTING FUNCTION  ---------------- */
/*
 * This function prints a hexadecimal number with formatting based on
 * the provided format.
 * It takes as parameters an unsigned integer (n), a flag indicating whether
 * the hexadecimal should be uppercase (hex_up), and a pointer to a t_format
 * structure (format).
 * If the integer is 0 and the precision specified in the format is 0, the
 * function allocates a string of size 1 and initializes it to '\0'.
 * Otherwise, the function converts the integer to a hexadecimal string using
 * the ft_itoa_base function. If the integer is not 0 and the hash flag is set in
 * the format, the function adds a hexadecimal prefix to the string.
 * The function then applies precision formatting, sign or space prefix, and
 * field width formatting to the string, in that order.
 * The function writes the formatted string to the standard output and
 * calculates the length of the string.
 * The function then frees the string and returns the length.
 */
int	ft_print_hex(unsigned int n, int hex_up, t_format *format)
{
	int		len;
	char	*str;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
	{
		str = ft_itoa_base(n, 16, hex_up);
		if (n != 0 && format->hash)
			ft_add_hex_prefix(&str, hex_up);
	}
	str = ft_precision_formatting(str, format);
	str = ft_sign_space_prefix(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

/* ------------  PRINT UNSIGNED INTEGER WITH FORMATTING FUNCTION  ----------- */
/*
 * This function prints an unsigned integer with formatting based on the
 provided format.
 * It takes as parameters an unsigned integer (n) and a pointer to a t_format
 structure (format).
 * If the integer is 0 and the precision specified in the format is 0,
 the function allocates a string of size 1 and initializes it to '\0'.
 * Otherwise, the function converts the integer to a string using the
 ft_itoa_base function.
 * The function then applies precision formatting, sign or space prefix,
 and field width formatting to the string, in that order.
 * The function writes the formatted string to the standard output and
 calculates the length of the string.
 * The function then frees the string and returns the length.
 */
int	ft_print_ui(unsigned int n, t_format *format)
{
	int		len;
	char	*str;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
		str = ft_itoa_base(n, 10, 0);
	str = ft_precision_formatting(str, format);
	str = ft_sign_space_prefix(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
