/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:03:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  INITIALIZE POINTER STRING FUNCTION  ------------------------ */
/*
 * This function initializes a string to represent a pointer address.
 * It takes as parameters the pointer address as an unsigned long long (n),
 *  a pointer to the string to be initialized (str), and a flag indicating
 * whether to use uppercase for hexadecimal digits (hex_up).
 * If the pointer address is 0, the function sets the string to "NULLPOINTER".
 * Otherwise, it converts the pointer address to a hexadecimal string using the
 * ft_itoa_base function, and then prepends "0x" to the string using the
 * ft_strjoin function.
 * The original hexadecimal string is then freed.
 * The function returns the length of the initialized string.
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

/* ------------  PRINT POINTER FUNCTION  ------------------------------------ */
/*
 * This function prints a pointer address in hexadecimal format.
 * It takes as parameters the pointer address as an unsigned long long (n),
 * a flag indicating whether to use uppercase for hexadecimal digits (hex_up),
 * and a pointer to a t_format structure (format).
 * The function first initializes a string to represent the pointer address
 * using the ft_initialize_ptr_str function.
 * If the minus flag in the format structure is set, the function prints the
 *  string and then any necessary padding spaces.
 * If the minus flag is not set, the function first prints any necessary
 * padding spaces and then the string.
 * The function keeps track of the number of characters written (wr_count).
 * Finally, the function frees the string and returns the total number of
 * characters written.
 */
int	ft_print_ptr(unsigned long long n, int hex_up, t_format *format)
{
	int		len;
	int		wr_count;
	char	*str;

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
