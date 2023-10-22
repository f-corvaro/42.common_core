/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:06:10 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 17:54:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>*/

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*memcpy is used to copy a block of memory from a location to another.

the code below is used to test the function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[15];
	char str2[15];
	strcpy(str1, "daje Roma daje");
	puts(str1);
	ft_memcpy(str2, str1, 15);
	puts(str2);
	return (0);
}
*/