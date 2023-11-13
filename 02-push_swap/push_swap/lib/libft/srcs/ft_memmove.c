/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:50:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:55:25 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that copies 'n' bytes from 'src' to 'dest', even if the
 * memory areas overlap.
 *
 * Parameters:
 * - dest: a pointer to the destination memory area.
 * - src: a pointer to the source memory area.
 * - n: the number of bytes to copy.
 *
 * Returns:
 * - A pointer to the destination memory area 'dest'.
 *
 * The function first checks if 'dest' and 'src' are NULL. If they are,
 * it returns NULL.
 * Then it checks if 'dest' is greater than 'src'. If it is, it enters a loop
 * that continues as long as 'i' is greater than 0.
 * In each iteration of the loop, it copies the byte at index 'i - 1' from
 * 'src' to 'dest' and decrements 'i'.
 * If 'dest' is not greater than 'src', it enters a loop that continues as
 * long as 'i' is less than 'n'.
 * In each iteration of the loop, it copies the byte at index 'i' from 'src'
 * to 'dest' and increments 'i'.
 * Finally, it returns 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
