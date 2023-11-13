/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:50:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:06:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that converts a string to an integer (similar to the standard
 * atoi function).
 *
 * Parameters:
 * - str: a null-terminated string that represents the integer.
 *
 * Returns:
 * - The integer value represented by the string.
 *
 * The function skips any leading whitespace characters (spaces, tabs,
 * newlines, etc.).
 * Then it checks for an optional sign ('-' or '+'). If the sign is '-',
 * the resulting integer will be negative.
 * Then it converts the subsequent sequence of digits into an integer.
 * If the string contains any non-digit characters after the first sequence
 * of digits, these are ignored.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sign);
}
