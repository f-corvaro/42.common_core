/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:26:59 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 21:16:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (j < (size - 1) && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*the strlcpy function is intended to replace the function strcpy (which
copies a string to a destination buffer) with a secure version that cannot
overflow the destination buffer. strlcpy return the total lenght of the
string it tried to create, (lenght of src).

the code below is used to test the function

#include <stdio.h>
int main ()
{
	char str1[15];
	char str2[15];
	int res;

	memcpy(str1, "daje roma daje", 15);
	memcpy(str2, "daje roma daje", 15);

	res = ft_memcmp(str1, str2, 20);

	if(res > 0)
		printf("str2 is less than str1\n");
	else if(res < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");
	return(0);
}
*/