/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:06:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:55:50 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that copies 'len' bytes from 'src' to 'dest'.
 *
 * Parameters:
 * - dest: a pointer to the destination memory area.
 * - src: a pointer to the source memory area.
 * - len: the number of bytes to copy.
 *
 * Returns:
 * - A pointer to the destination memory area 'dest'.
 *
 * The function first checks if 'dest' and 'src' are NULL. If they are, it
 * returns NULL.
 * Then it enters a loop that continues as long as 'i' is less than 'len'.
 * In each iteration of the loop, it copies the byte at index 'i' from
 * 'src' to 'dest' and increments 'i'.
 * Finally, it returns 'dest'.
 *
 * Note: This function does not check for overlap between 'src' and 'dest'.
 * Use 'ft_memmove' if the memory areas may overlap.
 */
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
