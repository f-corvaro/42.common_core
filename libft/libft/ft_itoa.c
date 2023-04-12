/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:00:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/12 20:01:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*static int is a variable that exist till the end of the program*/
/*once initialized. int will be destroyed when the function ends.*/
/*long is a data type that can store a single 64-bit signed int.*/
/*from -2.147.483.648 to 2.147.483.648*/
static int	ft_size(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}
/*len is +1 because there is null at the end of the string.*/
/*/ is division and % module*/

char	*ft_itoa(int n)
{
	char	*c;
	long	l;
	size_t	len;

	l = n;
	len = ft_size(l) + 1;
	c = (char *)malloc(sizeof(char) * len);
	if (!c)
		return (NULL);
	if (l < 0)
	{
		l *= -1;
		c[0] = '-';
	}
	c[--len] = '\0';
	if (l == 0)
		c[0] = '0';
	while (l)
	{
		c[--len] = (l % 10) + '0';
		l /= 10;
	}
	return (c);
}
/*it converts the int to a str (char *). Negative numbers*/
/*must be handled*/