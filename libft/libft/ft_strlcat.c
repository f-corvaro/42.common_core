/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:39:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 12:08:00 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!src || !dest) && !destsize)
		return (0);
	while (dest[i] && i < destsize)
		i++;
	while (src[j] && (i + j + 1) < destsize)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < destsize)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*is used for concatenate strings respectively. Is designed to be much safer
then strncat. strlcat take the full size of the buffer (not just the lenght)
and guarantee to NUL-terminate the result

the code below is used to test the function

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int main ()
{
	size_t	len;
	const char	p[15] = "daje-roma-daje";
	char	dest[50] = "0123456789";

	len = ft_strlcat(dest, p, 17);
	printf("%ld\n", len);
	printf("%s\n", dest);
}
*/