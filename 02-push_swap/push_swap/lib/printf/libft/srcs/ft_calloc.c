/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:12:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:09:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that allocates memory for an array of 'n' elements, each of size
 * 'size', and initializes all bytes in the allocated storage to zero.
 *
 * Parameters:
 * - n: the number of elements to allocate.
 * - size: the size of each element.
 *
 * Returns:
 * - A pointer to the allocated memory, which is filled with zeros.
 * - If an error occurs, or if the size of the memory to be allocated is too
 * large, the function returns NULL.
 *
 * The function first checks if the size of the memory to be allocated is too
 * large. If so, it returns NULL.
 * Then it allocates the memory using the 'malloc' function. If 'malloc' fails,
 * the function returns NULL.
 * Then it initializes the allocated memory to zero using the 'ft_bzero'
 * function.
 * Finally, it returns a pointer to the allocated memory.
 */
void	*ft_calloc(size_t n, size_t size)
{
	void	*memo;

	if (n == 18446744073709551615UL || size == 18446744073709551615UL)
		return (0);
	memo = (void *)malloc(n * size);
	if (!memo)
		return (NULL);
	ft_bzero(memo, (n * size));
	return (memo);
}
