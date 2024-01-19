/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:47:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:43:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Sets the first 'len' bytes of the block of memory pointed by 'dest'
 * to zero.
 *
 * @param dest Pointer to the block of memory to fill.
 * @param len Number of bytes to be set to zero. ---
 *
 * This function uses 'ft_memset' to perform the operation.
 * It sets the bytes of the memory area pointed by 'dest' to zero.
 */
void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}
