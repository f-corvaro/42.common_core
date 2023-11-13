/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:14 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 15:33:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  IS PRESENT CHAR FUNCTION  ---------------------------------- */
/*
 * This function checks if a specific character is present in a string.
 * It takes as parameters the string to be checked (str) and the character to
 * look for (c).
 * The function initializes a counter (i) to 0 and then starts a loop that
 * continues as long as the i-th character of the string is not the
 * null terminator.
 * In each iteration of the loop, it checks if the i-th character of the
 * string is equal to the character to look for.
 * If it is, the function immediately returns 1, indicating that the character
 * is present in the string.
 * If the character is not found after checking all characters in the string,
 * the function returns 0.
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

/* ------------  INITIALIZE T_FORMAT FUNCTION  ----------------------------- */
/*
 * This function initializes a t_format structure and returns a pointer to it.
 * It first allocates memory for a new t_format structure. If memory allocation
 *  fails, it returns NULL.
 * Then, it initializes all fields of the structure to 0, except for the
 * precision field which is set to -1.
 * This is because a precision of -1 indicates that no precision has been
 * specified, which is the default state.
 * Finally, the function returns a pointer to the newly allocated and
 * initialized t_format structure.
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

/* ------------  FLAGS CHECK AND SET FUNCTION  ------------------------------ */
/*
 * This function checks a character against a set of format flags and sets the
 * corresponding flag in a format structure.
 * It takes as parameters a pointer to the format structure (format) and the
 * character to check (c).
 * The function checks if the character is equal to any of the format flags
 * ('-', '0', '#', ' ', '+').
 * If it is, the corresponding flag in the format structure is set to 1.
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

/* ------------  PARSE FORMAT SPECIFIER FUNCTION  -------------------------- */
/*
 * This function parses a format specifier from a format string and
 * initializes a new t_format structure accordingly.
 * It takes as parameters a null-terminated string that contains the format
 * specifier (str), and a pointer to an integer (i) that represents the current
 * position in the string.
 * The function first allocates and initializes a new t_format structure.
 * Then, it enters a loop that continues as long as the current character in
 * the string is a format flag ('-', '0', '#', ' ', '+').
 * In each iteration of the loop, it sets the corresponding flag in the t_format
 *  structure and increments the position in the string.
 * After the loop, it checks if the current character in the string is a digit.
 * If it is, it converts the following digits to an integer and sets this as
 * the field width in the t_format structure, and increments the position in
 *  the string to the end of the digits.
 * Then, it checks if the current character in the string is a '.'.
 * If it is, it increments the position in the string, converts the following
 * digits to an integer and sets this as the precision in the t_format
 * structure, and increments the position in the string to the end of the
 *  digits.
 * Finally, it sets the current character in the string as the format
 * specifier in the t_format structure.
 * The function returns a pointer to the newly allocated and initialized
 * t_format structure.
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
