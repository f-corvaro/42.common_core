/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:23:09 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/19 14:16:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Converts a string to an integer, validating the input.
 *
 * This function converts a string to an integer, similar to the ft_atoi
 * function. However, it also validates the input string: it skips any
 * leading whitespace or newline characters, handles an optional sign
 * (+ or -), and checks that all remaining characters are digits.
 * If the string contains any invalid characters or the resulting integer
 * is out of the range of a 32-bit signed integer, it calls another function.
 *
 * @param str A pointer to a constant character string to be converted
 * to an integer. This string should represent a valid integer, optionally
 * preceded by whitespace, a newline, and/or a sign.
 * @return The integer representation of the input string.
 */
int	ft_atoi_val(const char *str)
{
	long int	res;
	int			sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_print_error();
		res = res * 10 + (*str++) - 48;
	}
	if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
		ft_print_error();
	return (res * sign);
}
