/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:47:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 11:19:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that sets the first 'len' bytes of the block of memory
 * pointed to by 'dest' to zero.
 *
 * Parameters:
 * - dest: a pointer to the block of memory to fill with zeros.
 * - len: the number of bytes to fill with zeros.
 *
 * This function does not return a value.
 *
 * The function uses the 'ft_memset' function to fill the memory block
 * with zeros.
 * This function is typically used to initialize a block of memory before
 * using it.
 */
void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}
