/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:12:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 15:12:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*memo;

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
