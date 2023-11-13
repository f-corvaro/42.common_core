/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:22:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:31:39 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that compares two strings up to a certain number of characters.
 *
 * Parameters:
 * - str1: the first string to compare.
 * - str2: the second string to compare.
 * - size: the maximum number of characters to compare.
 *
 * Returns:
 * - An integer less than, equal to, or greater than zero if 'str1' (or the
 * first 'size' characters thereof) is found, respectively, to be less than,
 * to match, or be greater than 'str2'.
 * - 0 if 'size' is 0 or if 'str1' and 'str2' are equal.
 *
 * The function first checks if 'size' is 0. If it is, it returns 0.
 * Then it enters a loop that continues as long as there are characters in
 * 'str1' or 'str2' and 'i' is less than 'size'.
 * In each iteration of the loop, it checks if the current characters in 'str1'
 * and 'str2' are different.
 * If they are, it returns the difference between the ASCII values of the
 * current characters in 'str1' and 'str2'.
 * If the current characters in 'str1' and 'str2' are the same, it increments
 * 'i' and continues to the next iteration.
 * If 'str1' and 'str2' are equal, the function returns 0.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t	size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((str1[i] || str2[i]) && i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else
			i++;
	}
	return (0);
}
