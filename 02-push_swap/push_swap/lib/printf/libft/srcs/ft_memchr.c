/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:27:48 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:57:27 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that scans the first 'n' bytes of the memory area pointed
 to by 'str' for the character 'c'.
 *
 * Parameters:
 * - str: a pointer to the memory area to scan.
 * - c: the character to scan for.
 * - n: the number of bytes to scan.
 *
 * Returns:
 * - A pointer to the first occurrence of 'c', if 'c' is found.
 * - NULL, if 'c' is not found within 'n' bytes.
 *
 * The function first casts 'str' to a pointer to unsigned char and
 * assigns it to 's'.
 * Then it enters a loop that continues as long as 'i' is less than 'n'.
 * In each iteration of the loop, it checks if the byte at index 'i' of
 * 's' is equal to 'c'.
 * If it is, it returns a pointer to the byte.
 * If 'c' is not found within 'n' bytes, it returns NULL.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (0);
}
