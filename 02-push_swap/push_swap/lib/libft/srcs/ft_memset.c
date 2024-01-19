/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:11:51 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:58:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Fills a block of memory with a specified value.
 *
 * @param dest The pointer to the block of memory to fill.
 * @param ch The value to set. The value is passed as an int, but the function
 * fills the block of memory using the unsigned char conversion of this value.
 * @param len The number of bytes to be set to the value.
 *
 * This function copies the value 'ch' (converted to an unsigned char) into
 * each of the first 'len' bytes of the area pointed to by 'dest'.
 *
 * @return void* Returns a pointer to the memory area 'dest'.
 */
void	*ft_memset(void *dest, int ch, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		ptr [len - 1] = ch;
		len--;
	}
	return (dest);
}
