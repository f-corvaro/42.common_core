/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:00:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:13:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A helper function that calculates the number of digits in a number.
 *
 * Parameters:
 * - n: a long integer whose number of digits is to be calculated.
 *
 * Returns:
 * - The number of digits in 'n'.
 *
 * The function initializes a counter 'i' to 1. If 'n' is negative, it is
 * made positive and the counter is incremented.
 * Then, as long as 'n' is greater than 10, 'n' is divided by 10 and the
 * counter is incremented.
 * The counter will therefore hold the number of digits in the original 'n'
 * at the end of the function.
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

/*
 * A function that converts an integer to a string.
 *
 * Parameters:
 * - n: the integer to convert.
 *
 * Returns:
 * - A pointer to the newly created string representing the integer 'n'.
 * - NULL if memory allocation fails.
 *
 * The function first calculates the number of digits in 'n' using the
 * 'ft_size' helper function.
 * Then it allocates memory for a string of that size.
 * If 'n' is negative, it is made positive and a '-' sign is added at the
 * beginning of the string.
 * Then the digits of 'n' are converted to characters and added to the string.
 * Finally, the string is null-terminated and returned.
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
