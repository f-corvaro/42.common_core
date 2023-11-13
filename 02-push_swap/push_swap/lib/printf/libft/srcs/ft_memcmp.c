/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:36:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:57:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that compares the first 'n' bytes of the memory areas 'str1'
 * and 'str2'.
 *
 * Parameters:
 * - str1: a pointer to the first memory area.
 * - str2: a pointer to the second memory area.
 * - n: the number of bytes to compare.
 *
 * Returns:
 * - An integer less than, equal to, or greater than zero if the first
 * 'n' bytes of 'str1' are found, respectively, to be less than, to match,
 * or be greater than the first 'n' bytes of 'str2'.
 *
 * The function first casts 'str1' and 'str2' to pointers to unsigned char
 * and assigns them to 's1' and 's2', respectively.
 * Then it enters a loop that continues as long as 'i' is less than 'n'.
 * In each iteration of the loop, it checks if the byte at index 'i' of
 * 's1' is not equal to the byte at index 'i' of 's2'.
 * If they are not equal, it returns the difference between the byte at
 * index 'i' of 's1' and the byte at index 'i' of 's2'.
 * If all bytes are equal, it returns 0.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
