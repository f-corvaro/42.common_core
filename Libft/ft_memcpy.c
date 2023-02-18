/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:06:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/02/18 10:46:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	if (!dst && !src)
		return (NULL);
	p = (char *)dst;
	q = (char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dst);
}

/*memcpy function copy memory area*/