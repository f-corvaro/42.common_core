/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:06:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 17:25:28 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	if (!dest && !src)
		return (NULL);
	p = (char *)dest;
	q = (char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}

/*memcpy is used to copy a block of memory from a location to another. */