/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:03:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:16:46 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Initializes a string to represent a pointer.
 *
 * @param n The pointer to be represented as a string.
 * @param str A double pointer to the string that will hold the representation.
 * @param hex_up A flag that indicates whether the hexadecimal number should be
 * printed in uppercase or lowercase.
 *
 * @note This function checks if the pointer is NULL. If it is, it sets @str to
 * a copy of the string "NULLPOINTER".
 * Otherwise, it converts the pointer to a string representation in hexadecimal
 * and joins it with the string "0x" to form the full representation.
 * It then frees the temporary string used for the conversion.
 *
 * @return The length of the string representation of the pointer.
 */
static int	ft_initialize_ptr_str(unsigned long long n, char **str, int hex_up)
{
	char	*tmp;

	if (n == 0)
		*str = ft_strdup(NULLPOINTER);
	else
	{
		tmp = ft_itoa_base(n, 16, hex_up);
		*str = ft_strjoin("0x", tmp);
		free(tmp);
	}
	return (ft_strlen(*str));
}

/**
 * @brief Prints a pointer according to the specified format.
 *
 * @param n The pointer to be printed.
 * @param hex_up A flag that indicates whether the hexadecimal number should
 * be printed in uppercase or lowercase.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the pointer should be printed.
 *
 * @note This function initializes a string to represent the pointer and gets
 * its length.
 * If the minus flag in the format is set, it writes the string to the standard
 * output and then writes spaces until the field width is reached.
 * If the minus flag is not set, it writes spaces until the field width minus
 * the length of the string is reached and then writes the string to the
 * standard output.
 * It then frees the string and returns the number of characters written.
 *
 * @return The number of characters written.
 */
int	ft_print_ptr(unsigned long long n, int hex_up, t_format *format)
{
	char	*str;
	int		len;
	int		wr_count;

	len = ft_initialize_ptr_str(n, &str, hex_up);
	if (format->minus == 1)
	{
		wr_count = write(1, str, len);
		while (format->field_width > wr_count)
			wr_count += write(1, " ", 1);
	}
	else
	{
		wr_count = 0;
		while (format->field_width-- > len + 2)
			wr_count += write(1, " ", 1);
		wr_count += write(1, str, len);
	}
	free(str);
	return (wr_count);
}
