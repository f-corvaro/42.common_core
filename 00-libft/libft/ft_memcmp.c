/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:36:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 19:49:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*compare the first n bytes of memory areas and return the difference value

the code below is used to test the function

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