/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:08:28 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 16:30:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Formats a string according to the specified precision.
 *
 * @param str The string to be formatted.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the string should be printed.
 *
 * @note This function checks if the precision is set to -1. If it is, it sets
 * the precision to 1.
 * Otherwise, it sets the precision to the value specified in the format.
 * It then checks if the first character of the string is a '-'. If it is, it
 * sets the offset to 1.
 * If the precision is greater than the length of the string minus the offset,
 * it allocates a new string with the size of the precision plus the offset.
 * It then copies the first offset characters from the original string to the
 new string, fills the next precision characters with '0', and copies the rest
 of the original string to the new string.
 * It then frees the original string and sets the pointer to the new string.
 *
 * @return The formatted string.
 */
char	*ft_precision_format(char *str, t_format *format)
{
	char	*tmp;
	int		len;
	int		p;
	int		offset;

	len = ft_strlen(str);
	offset = 0;
	if (format->precision == -1)
		p = 1;
	else
		p = format->precision;
	if (str[0] == '-')
		offset = 1;
	if (p > len - offset)
	{
		tmp = (char *) ft_calloc(p + offset + 1, sizeof(char));
		ft_memcpy(tmp, str, offset);
		ft_memset(tmp + offset, '0', p);
		ft_memcpy(tmp + p - len + 2 * offset, str + offset, len - offset);
		free(str);
		str = tmp;
	}
	return (str);
}

/**
 * @brief Adds a '+' or ' ' prefix to a string based on the format.
 *
 * @param n The integer value that the string represents.
 * @param str The string to which the prefix should be added.
 * @param format A pointer to a t_format structure that specifies the
 * format in which the string should be printed.
 *
 * @note This function checks if the integer is non-negative and if the
 * plus flag is set in the format. If both conditions are true, it adds the
 * '+' prefix to the string.
 * If the integer is non-negative and the plus flag is not set but the space
 * flag is set in the format, it adds the ' ' prefix to the string.
 * It then frees the original string and sets the pointer to the new string.
 *
 * @return The formatted string.
 */
char	*ft_plus_space_format(int n, char *str, t_format *format)
{
	char	*tmp;

	if (n >= 0 && format->plus)
	{
		tmp = ft_strjoin("+", str);
		free(str);
		str = tmp;
	}
	else if (n >= 0 && format->space)
	{
		tmp = ft_strjoin(" ", str);
		free(str);
		str = tmp;
	}
	return (str);
}

/**
 * @brief Adds a hexadecimal prefix to a string.
 *
 * @param str A pointer to the string to which the prefix should be added.
 * @param hex_up A flag that indicates whether the prefix should be in uppercase
 * or lowercase.
 *
 * @note This function checks if the hex_up flag is set. If it is, it adds the
 * uppercase prefix "0X" to the string.
 * If the hex_up flag is not set, it adds the lowercase prefix "0x" to the
 * string.
 * It then frees the original string and sets the pointer to the new string.
 */
void	ft_add_hex_prefix(char **str, int hex_up)
{
	char	*tmp;

	tmp = *str;
	if (hex_up)
		*str = ft_strjoin("0X", *str);
	else
		*str = ft_strjoin("0x", *str);
	free(tmp);
}

/**
 * @brief Adds zero padding to a string based on the specified format.
 *
 * @param str The string to which the padding should be added.
 * @param pad A pointer to a string that will be filled with zero padding.
 * @param format A pointer to a t_format structure that specifies the format
 * in which the string should be printed.
 * @param len The length of the string.
 *
 * @note This function fills the string pointed to by pad with '0' characters
 * until the specified field width is reached.
 * If the first character of the string is '-', ' ', or '+', it sets the first
 * character of the padded string to this character and copies the rest of the
 * string to the padded string, starting from the position where the field width
 * minus the length plus 1 is reached.
 * If the first character of the string is not '-', ' ', or '+', it copies the
 * string to the padded string, starting from the position where the field width
 * minus the length is reached.
 */
void	ft_zero_padding(char *str, char **pad, t_format *format, int len)
{
	char	*tmp;

	tmp = *pad;
	ft_memset(tmp, '0', format->field_width);
	if (str[0] == '-' || str[0] == ' ' || str[0] == '+' )
	{
		ft_memset(tmp, str[0], 1);
		ft_memcpy(tmp + format->field_width - len + 1, str + 1, len - 1);
	}
	else
		ft_memcpy(tmp + format->field_width - len, str, len);
}

/**
 * @brief Formats a string according to the specified field width.
 *
 * @param str The string to be formatted.
 * @param format A pointer to a t_format structure that specifies
 * the format in which the string should be printed.
 *
 * @note This function checks if the field width specified in the
 * format is greater than the length of the string.
 * If it is, it allocates a new string with the size of the field width
 * plus 1.
 * If the zero flag is set, the precision is -1, and the minus flag is
 * not set in the format, it adds zero padding to the string.
 * If the minus flag is set in the format, it copies the string to the
 new string and fills the rest of the new string with ' ' characters.
 * If the minus flag is not set in the format, it fills the new string
 with ' ' characters and copies the string to the new string, starting
 from the position where the field width minus the length is reached.
 * It then frees the original string and sets the pointer to the new
 string.
 *
 * @return The formatted string.
 */
char	*ft_field_width(char *str, t_format *format)
{
	char	*tmp;
	int		len;

	len = ft_strlen(str);
	if (format->field_width > len)
	{
		tmp = (char *) ft_calloc(format->field_width + 1, sizeof(char));
		if (format->zero && format->precision == -1 && !format->minus)
			ft_zero_padding(str, &tmp, format, len);
		else if (format->minus)
		{
			ft_memcpy(tmp, str, len);
			ft_memset(tmp + len, ' ', format->field_width - len);
		}
		else
		{
			ft_memset(tmp, ' ', format->field_width);
			ft_memcpy(tmp + format->field_width - len, str, len);
		}
		free(str);
		str = tmp;
	}
	return (str);
}
