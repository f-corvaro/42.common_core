/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:50:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:01:13 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Copies memory area, even if the memory areas overlap.
 *
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to be copied.
 *
 * This function copies 'n' bytes from memory area 'src' to memory area 'dest'.
 * The memory areas may overlap: copying takes place as though the bytes in
 * 'src'
 * are first copied into a temporary array that does not overlap 'src' or
 * 'dest',
 * and the bytes are then copied from the temporary array to 'dest'.
 * If 'dest' or 'src' is NULL, the function returns NULL.
 *
 * @return void* Returns a pointer to the destination memory area 'dest'.
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
