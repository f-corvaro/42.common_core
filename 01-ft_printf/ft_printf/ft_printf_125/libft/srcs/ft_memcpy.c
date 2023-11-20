/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:06:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:00:06 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Copies memory area.
 *
 * @param dest The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param len The number of bytes to be copied.
 *
 * This function copies 'len' bytes from memory area 'src' to memory area
 * 'dest'.
 * The memory areas must not overlap. Use ft_memmove(3) if they do.
 * If 'dest' or 'src' is NULL, the function returns NULL.
 *
 * @return void* Returns a pointer to the destination memory area 'dest'.
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
