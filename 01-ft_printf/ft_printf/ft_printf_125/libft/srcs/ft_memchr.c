/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:27:48 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:59:02 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Scans memory for a character.
 *
 * @param str The pointer to the block of memory to scan.
 * @param c The value to search for. The value is passed as an int, but the
 * function searches for the unsigned char conversion of this value.
 * @param n The number of bytes to be scanned.
 *
 * This function scans the first 'n' bytes of the memory area pointed to by
 * 'str' for the character 'c'.
 * The first byte to match 'c' (interpreted as an unsigned char) stops the
 * operation.
 *
 * @return void* Returns a pointer to the matching byte or NULL if the character
 * does not occur in the given memory area.
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
