/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:22:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 12:51:33 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, char *str2, size_t	size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while ((str1[i] || str2[i]) && i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else
			i++;
	}
	return (0);
}

/*compare the 2 strings in size bytes and
if Return value < 0 then it indicates str1 is less than str2.
if Return value > 0 then it indicates str2 is less than str1.
if Return value = 0 then it indicates str1 is equal to str2.

the code below is used to test the function
#include <stdio.h>
int main ()
{
	const char	p1[15] = "abcdefgh";
	char	p2[15] = "abcdwxyz";

	printf("%d\n", ft_strncmp(p1, p2, 4));
}
*/
