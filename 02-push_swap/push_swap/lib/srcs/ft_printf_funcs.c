/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:04:36 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:37:02 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Prints a character according to the specified format.
 *
 * @param c The character to be printed.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the character should be printed.
 *
 * @note This function checks if the minus flag is set in the format. If it is,
 * it prints the character first and then the padding.
 * If the minus flag is not set, it prints the padding first and then the
 * character.
 * The padding character is a space.
 * The function continues to print the padding character until the specified
 * field width is reached.
 *
 * @return The number of characters written.
 */
int	ft_print_char(int c, t_format *format)
{
	char	pad;
	int		wr_count;

	pad = ' ';
	wr_count = 0;
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

/**
 * @brief Prints a string according to the specified format.
 *
 * @param stri The string in input to be printed.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the string should be printed.
 *
 * @note This function checks if the string is NULL. If it is, it sets the
 * string to a predefined NULLSTRING. It then calculates the length of the
 * string and checks if the precision specified in the format is less than
 * the length. If it is, it sets the length to the precision.
 * It then checks if the minus flag is set in the format. If it is, it
 * prints the string first and then the padding.
 * If the minus flag is not set, it prints the padding first and then
 * the string.
 * The padding character is a space.
 * The function continues to print the padding character until
 * the specified field width is reached.
 *
 * @return The number of characters written.
 */
int	ft_print_str(char *stri, t_format *format)
{
	char	*str;
	int		wr_count;
	int		len;

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

/**
 * @brief Prints an integer according to the specified format.
 *
 * @param n The integer to be printed.
 * @param format A pointer to a t_format structure that specifies
 * the format in which the integer should be printed.
 *
 * @note This function checks if the integer is 0 and the precision
 * specified in the format is 0. If both conditions are true, it
 * allocates a string of size 1.
 * Otherwise, it converts the integer to a string.
 * It then formats the string according to the specified precision,
 * adds a '+' or ' ' prefix to the string based on the format, and
 * formats the string according to the specified field width.
 * It then writes the string to the standard output and frees the string.
 *
 * @return The length of the printed string.
 */
int	ft_print_int(int n, t_format *format)
{
	char	*str;
	int		len;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
		str = ft_itoa(n);
	str = ft_precision_format(str, format);
	str = ft_plus_space_format(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

/**
 * @brief Prints a hexadecimal number according to the specified format.
 *
 * @param n The hexadecimal number to be printed.
 * @param hex_up A flag that indicates whether the hexadecimal number
 * should be printed in uppercase or lowercase.
 * @param format A pointer to a t_format structure that specifies the
 * format in which the hexadecimal number should be printed.
 *
 * @note This function checks if the hexadecimal number is 0 and the
 * precision specified in the format is 0. If both conditions are true,
 * it allocates a string of size 1.
 * Otherwise, it converts the hexadecimal number to a string.
 * If the hexadecimal number is not 0 and the hash flag is set in the format,
 * it adds a hexadecimal prefix to the string.
 * It then formats the string according to the specified precision, adds a
 * '+' or ' ' prefix to the string based on the format, and formats the string
 * according to the specified field width.
 * It then writes the string to the standard output and frees the string.
 *
 * @return The length of the printed string.
 */
int	ft_print_hex(unsigned int n, int hex_up, t_format *format)
{
	char	*str;
	int		len;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
	{
		str = ft_itoa_base(n, 16, hex_up);
		if (n != 0 && format->hash)
			ft_add_hex_prefix(&str, hex_up);
	}
	str = ft_precision_format(str, format);
	str = ft_plus_space_format(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

/**
 * @brief Prints an unsigned integer according to the specified format.
 *
 * @param n The unsigned integer to be printed.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the integer should be printed.
 *
 * @note This function checks if the integer is 0 and the precision specified
 * in the format is 0. If both conditions are true, it allocates a string of
 * size 1.
 * Otherwise, it converts the integer to a string.
 * It then formats the string according to the specified precision, adds a '+'
 * or ' ' prefix to the string based on the format, and formats the string
 * according to the specified field width.
 * It then writes the string to the standard output and frees the string.
 *
 * @return The length of the printed string.
 */
int	ft_print_ui(unsigned int n, t_format *format)
{
	char	*str;
	int		len;

	if (n == 0 && format->precision == 0)
		str = (char *) ft_calloc(1, sizeof(char));
	else
		str = ft_itoa_base(n, 10, 0);
	str = ft_precision_format(str, format);
	str = ft_plus_space_format(n, str, format);
	str = ft_field_width(str, format);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
