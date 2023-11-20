/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:12:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:13:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Allocates and returns a substring from a string.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 *
 * This function creates a substring of the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 * If 'start' is greater than the string length, the function returns an empty
 * string.
 * If the substring is longer than 'len', only the first 'len' characters are
 * considered.
 * If the allocation fails, the function returns NULL.
 * If 's' is NULL, the function returns NULL.
 *
 * @return char* Returns the substring, or NULL if the allocation fails or 's'
 * is NULL.
 */
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
