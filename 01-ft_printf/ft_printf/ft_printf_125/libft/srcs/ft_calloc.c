/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:12:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:45:14 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Allocates memory for an array of 'n' elements, each of 'size' bytes,
 * and returns a pointer to the allocated memory. The memory is set to zero.
 *
 * @param n Number of elements to be allocated.
 * @param size Size of elements.
 *
 * @see ft_bzero
 *
 * If the multiplication of 'n' and 'size' results in overflow, or if the
 * allocation fails,
 * the function returns NULL.
 *
 * @return void* Pointer to the allocated memory, or NULL if the allocation
 * fails or overflows.
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
