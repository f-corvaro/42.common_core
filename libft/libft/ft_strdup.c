/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:15:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 12:39:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*source)
{
	int		len;
	char	*copy;
	int		i;

	len = ft_strlen(source) + 1;
	copy = (char *)malloc (sizeof(char) * len);
	if (!copy)
		return (NULL);
	i = 0;
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*creates a dupplicate for the string passed as parameter.

the code below is used to test the function

#include <stdio.h>
#include <stdlib.h>

int	main (void)
{
	char	*c = "daje roma daje";
	char	*d;

	d = (ft_strdup(c));
	printf ("%s", d);
}
*/