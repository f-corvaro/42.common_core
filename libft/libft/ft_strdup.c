/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:15:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/13 14:26:50 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char	*source)
{
	int		len;
	char	*copy;
	int		i;

	len = ft_strlen(source) + 1;
	copy = (char *)malloc (sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	main (void)
{
	char	*c = "daje roma daje";
	char	*d;

	d = (ft_strdup(c));
	printf ("%s", d);
}
/*creates a dupplicate for the string passed as parameter.*/