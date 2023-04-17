/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:22:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 13:44:30 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, char *str2, size_t	size)
{
	if (size == 0)
		return (0);
	while (*str1 == *str2 && size > 0 && *str2 != '\0')
	{
		str1++;
		str2++;
		size--;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

/*compare the 2 strings in size bytes and
if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2.

the code below is used to test the function

#include <stdio.h>
int main ()
{
	const char	p1[15] = "daje-roma-daje";
	char	p2[15] = "daje-roma-daje";

	printf("%d\n", ft_strncmp(p1, p2, 15));
}
*/