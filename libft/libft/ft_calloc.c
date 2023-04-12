/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:12:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/03/30 15:29:11 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;

	mem = (void *)malloc(n * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (n * size));
	return (mem);
}

/*allocates memory and sets its bytes' values to 0*/