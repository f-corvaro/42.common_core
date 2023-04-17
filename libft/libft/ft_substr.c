/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:12:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 16:01:42 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		slen;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((int)start >= slen)
		return (ft_strdup(""));
	if ((int)len > slen)
		len = slen;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			substr[j++] = s[i];
		i++;
	}
	substr[j] = 0;
	return (substr);
}

/*s -> the string from which to create the substring.
start -> start index of the substr in the s.
len -> maximum lenght of the substr.
the function return the substr.

int	main(void)
{
	char const		*d = "daje-roma-daje";
	unsigned int	f = 4;
	size_t			l = 8;

	printf("%s\n", ft_substr(d, f, l));
}
*/