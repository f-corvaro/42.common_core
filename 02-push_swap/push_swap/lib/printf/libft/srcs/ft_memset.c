/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:11:51 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:54:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that fills the first 'len' bytes of the memory area pointed to
 * by 'dest' with the constant byte 'ch'.
 *
 * Parameters:
 * - dest: a pointer to the memory area to be filled.
 * - ch: the constant byte to fill the memory area with.
 * - len: the number of bytes to be filled.
 *
 * Returns:
 * - A pointer to the memory area 'dest'.
 *
 * The function first casts 'dest' to a pointer to unsigned char and assigns
 * it to 'ptr'.
 * Then it enters a loop that continues as long as 'len' is greater than 0.
 * In each iteration of the loop, it sets the byte at index 'len - 1' of 'ptr'
 * to 'ch' and decrements 'len'.
 * Finally, it returns 'dest'.
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
