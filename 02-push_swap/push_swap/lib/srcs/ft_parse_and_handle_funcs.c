/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_and_handle_funcs.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:35:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:36:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Handles the format specifier and prints the corresponding argument.
 *
 * @param format A pointer to a t_format structure that specifies the format
 * in which the argument should be printed.
 * @param args A va_list that contains the arguments to be printed.
 *
 * @note This function gets the format specifier and checks it against each
 * possible value.
 * If the specifier is 'c', it prints the next argument as a char.
 * If the specifier is 's', it prints the next argument as a string.
 * If the specifier is 'p', it prints the next argument as a pointer.
 * If the specifier is 'd' or 'i', it prints the next argument as an int.
 * If the specifier is 'u', it prints the next argument as an unsigned int.
 * If the specifier is 'x' or 'X', it prints the next argument as a hexadecimal
 * number.
 * If the specifier is '%', it prints a '%' character.
 * If the specifier is not recognized, it returns 0.
 *
 * @return The number of characters printed, or 0 if the format specifier is not
 * recognized.
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

/**
 * @brief Checks if a character is present in a string.
 *
 * @param str The string to be searched.
 * @param c The character to search for.
 *
 * @note This function initializes an index @i to 0 and enters a loop where
 * it checks if the character at index @i in the string is equal to @c.
 * If it is, the function returns 1. If it is not, @i is incremented and the
 * loop continues until the end of the string is reached.
 * If the end of the string is reached without finding @c, the function returns
 * 0.
 *
 * @return 1 if @c is found in @str, 0 otherwise.
 */
static int	ft_ispresent_char(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Initializes a t_format structure.
 *
 * @note This function allocates memory for a new t_format structure and
 * assigns it to @format.
 * If the allocation fails, it returns NULL.
 * Otherwise, it initializes all the fields of the structure to their
 * default values:
 * - minus, zero, hash, space, plus, and specifier are set to 0,
 * - field_width is set to 0,
 * - precision is set to -1.
 * It then returns a pointer to the initialized structure.
 *
 * @return A pointer to the initialized t_format structure, or NULL if
 * the memory allocation fails.
 */
static t_format	*ft_initialize_t_format(void)
{
	t_format	*format;

	format = (t_format *) malloc(sizeof(t_format));
	if (!format)
		return (NULL);
	format->minus = 0;
	format->zero = 0;
	format->hash = 0;
	format->space = 0;
	format->plus = 0;
	format->field_width = 0;
	format->precision = -1;
	format->specifier = 0;
	return (format);
}

/**
 * @brief Checks a character against each possible flag and sets
 * the corresponding field in a t_format structure if a match is found.
 *
 * @param format A pointer to a t_format structure in which the flags
 * should be set.
 * @param c The character to be checked.
 *
 * @note This function checks if @c is equal to each possible flag
 * ('-', '0', '#', ' ', '+').
 * If @c is equal to a flag, it sets the corresponding field in the
 * t_format structure to 1.
 */
static void	ft_flags_checkset(t_format *format, char c)
{
	if (c == '-')
		format->minus = 1;
	else if (c == '0')
		format->zero = 1;
	else if (c == '#')
		format->hash = 1;
	else if (c == ' ')
		format->space = 1;
	else if (c == '+')
		format->plus = 1;
}

/**
 * @brief Parses a format specifier and initializes a t_format structure
 * accordingly.
 *
 * @param str The format specifier string to be parsed.
 * @param i A pointer to an integer that keeps track of the current position
 * in the string.
 *
 * @note This function initializes a new t_format structure and assigns it
 * to @format.
 * It then enters a loop where it checks if the character at position @i in
 * the string is a flag.
 * If it is, it sets the corresponding field in the t_format structure and
 * increments @i.
 * If it is not, it breaks the loop.
 * It then checks if the character at position @i in the string is a digit.
 * If it is, it converts the substring starting at position @i to an integer
 * and assigns it to the field_width field in the t_format structure.
 * It then increments @i until the character at position @i in the string is
 * not a digit.
 * It then checks if the character at position @i in the string is a '.'.
 * If it is, it increments @i, converts the substring starting at position @i
 * to an integer, and assigns it to the precision field in the t_format
 * structure.
 * It then increments @i until the character at position @i in the string is
 * not a digit.
 * It then assigns the character at position @i in the string to the specifier
 * field in the t_format structure.
 * It then returns a pointer to the initialized t_format structure.
 *
 * @return A pointer to the initialized t_format structure.
 */
t_format	*ft_parse_format_specifier(const char *str, int *i)
{
	t_format	*format;

	format = ft_initialize_t_format();
	while (ft_ispresent_char("-0# +", str[*i]))
		ft_flags_checkset(format, str[(*i)++]);
	if (ft_isdigit(str[*i]))
		format->field_width = ft_atoi(&str[*i]);
	while (ft_isdigit(str[*i]))
		(*i)++;
	if (str[*i] == '.')
	{
		(*i)++;
		format->precision = ft_atoi(&str[*i]);
	}
	while (ft_isdigit(str[*i]))
		(*i)++;
	format->specifier = str[(*i)];
	return (format);
}
