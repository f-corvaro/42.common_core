/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 07:08:28 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  ADD HEX PREFIX FUNCTION  ----------------------------------- */
/*
 * This function adds a prefix ("0x" or "0X") to a hexadecimal string.
 * It takes as parameters a pointer to the string (str), and a flag (hex_up)
 * indicating whether the hexadecimal number should be in uppercase.
 * The function first saves a temporary pointer to the original string.
 * If hex_up is true (non-zero), it joins "0X" and the input string using the
 * ft_strjoin function, and assigns the result back to the input string.
 * If hex_up is false (zero), it does the same but with the "0x" prefix.
 * Finally, it frees the memory of the original string. This is necessary
 * because ft_strjoin allocates new memory for the joined string, so the
 * original string needs to be freed to avoid a memory leak.
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

/* ------------  APPLY PRECISION FORMATTING FUNCTION  ----------------------- */
/*
 * This function applies precision formatting to a string based on the provided
 * format.
 * It takes as parameters the string (str) and a pointer to a t_format structure
 * (format).
 * The function first calculates the length of the string and initializes the
 * precision offset.
 * If the precision in the format structure is -1, it sets the precision to 1;
 * otherwise, it uses the precision from the format structure.
 * If the first character of the string is '-', it increments the precision
 * offset.
 * If the precision is greater than the length of the string minus the precision
 * offset, it allocates a new string of the appropriate size, copies the
 * necessary characters from the original string to the new string, fills in
 * the remaining space with '0's, and then frees the original string and
 * replaces it with the new string.
 * The function returns the formatted string.
 */
char	*ft_precision_formatting(char *str, t_format *format)
{
	int		len;
	int		p;
	int		offset;
	char	*tmp;

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

/* ------------  ADD SIGN OR SPACE PREFIX FUNCTION  ------------------------- */
/*
 * This function adds a sign ('+') or a space (' ') prefix to a string, based
 * on the provided format.
 * It takes as parameters an integer (n), the string (str), and a pointer to a
 * t_format structure (format).
 * If n is non-negative and the plus flag in the format structure is set, the
 * function adds a '+' prefix to the string.
 * If n is non-negative and the space flag in the format structure is set, the
 * function adds a ' ' prefix to the string.
 * To add the prefix, the function creates a new string that is the result of
 * joining the prefix and the original string, frees the original string, and
 * then replaces the original string with the new string.
 * The function returns the modified string.
 */
char	*ft_sign_space_prefix(int n, char *str, t_format *format)
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

/* ------------  APPLY ZERO PADDING FUNCTION  ------------------------------- */
/*
 * This function applies zero padding to a string based on the provided format.
 * It takes as parameters the original string (str), a pointer to the
 * input string (pis), a pointer to a t_format structure (format), and the
 * length of the string (len).
 * The function first creates a temporary pointer (tmp) and assigns it the value
 * of the input string.
 * It then fills the input string with '0's up to the field width specified in
 * the format.
 * If the first character of the original string is '-', ' ', or '+', it sets
 * the first character of the input string to this character. It then copies the
 * rest of the original string (excluding the first character) to the input
 * string, starting at the position where the zero padding should end.
 * If the first character of the original string is not '-', ' ', or '+', it
 * simply copies the original string to the input string, starting at the
 * position where the zero padding should end.
 * This function effectively applies zero padding to the left of the string,
 * while preserving any sign or space character at the start of the string.
 */
void	ft_zero_padding(char *str, char **pis, t_format *format, int len)
{
	char	*tmp;

	tmp = *pis;
	ft_memset(tmp, '0', format->field_width);
	if (str[0] == '-' || str[0] == ' ' || str[0] == '+' )
	{
		ft_memset(tmp, str[0], 1);
		ft_memcpy(tmp + format->field_width - len + 1, str + 1, len - 1);
	}
	else
		ft_memcpy(tmp + format->field_width - len, str, len);
}

/* ------------  APPLY FIELD WIDTH FORMATTING FUNCTION  --------------------- */
/*
 * This function applies field width formatting to a string based on the
 * provided format.
 * It takes as parameters the original string (str) and a pointer to a t_format
 * structure (format).
 * The function first calculates the length of the string.
 * If the field width specified in the format is greater than the length of the
 * string, the function allocates a new string of the appropriate size.
 * If the zero flag is set in the format, the precision is -1, and the minus
 * flag is not set, the function applies zero padding to the string.
 * If the minus flag is set in the format, the function copies the original
 * string to the new string and fills the remaining space with ' ' characters.
 * If the minus flag is not set in the format, the function fills the new string
 *  with ' ' characters and then copies the original string to the new string,
 * starting at the position where the ' ' characters end.
 * The function then frees the original string and replaces it with the
 * new string.
 * The function returns the modified string.
 */
char	*ft_field_width(char *str, t_format *format)
{
	int		len;
	char	*tmp;

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
