/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:00:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:53:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Calculates the number of digits in a number.
 *
 * @param n The number to calculate the size of.
 *
 * This function calculates the number of digits in a given number 'n'.
 * It handles negative numbers by converting them to positive.
 *
 * @return int Returns the number of digits in 'n'.
 */
static int	ft_size(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}

/**
 * @brief Converts an integer to a null-terminated string.
 *
 * @param n The integer to convert.
 *
 * This function allocates (with malloc(3)) and returns a string representing 
 * the integer received as an argument. Negative numbers must be handled.
 *
 * @return char* Returns the string representing the integer, NULL if the
 * allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*str;
	long	l;
	size_t	len;

	l = n;
	len = ft_size(l) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (l < 0)
	{
		l *= -1;
		str[0] = '-';
	}
	str[--len] = '\0';
	if (l == 0)
		str[0] = '0';
	while (l)
	{
		str[--len] = (l % 10) + '0';
		l /= 10;
	}
	return (str);
}
