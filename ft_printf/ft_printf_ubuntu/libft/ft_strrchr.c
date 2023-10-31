/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:07:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 15:16:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

/*the function returns a pointer to the last occurence of character in the C
str

the code below is used to test the function

#include <stdio.h>
int main ()
{
	const char	p[15] = "daje-roma-daje";

	printf("%s\n", ft_strrchr(p, '-'));
	printf("%s\n", p);
}
*/