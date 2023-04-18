/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:12:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 15:49:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*void	ft_bzero(void *s, size_t n)
void * meaning that isn't associated with any data types.
It points to some data location in the storage. This
means it points to the adress of variables.
allocates memory and sets its bytes in fuction of the space
needed.The allocated memory is filled with bytes of value
zero. size_t is an unsigned integer
usefull because can be used to allocate memory of any data type
*/
