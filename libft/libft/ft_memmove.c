/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:50:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 18:30:20 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
memmove copies n character from src to dest, but for overlapping memory
blocks, memmove is a safer approach than memcpy

the code below is used to test the function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[15];
	char str2[20];
	strcpy(str1, "daje Roma daje");
	puts(str1);
	ft_memmove(str2, str1, 15);
	puts(str2);
	return (0);
}
*/