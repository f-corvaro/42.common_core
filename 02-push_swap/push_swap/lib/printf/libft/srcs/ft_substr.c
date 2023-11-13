/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:12:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:27:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that creates a substring from a given string.
 *
 * Parameters:
 * - s: the original string.
 * - start: the starting index of the substring in the original string.
 * - len: the maximum length of the substring.
 *
 * Returns:
 * - A pointer to the newly created substring.
 * - NULL if the original string is NULL or if memory allocation fails.
 *
 * The function first checks if 's' is NULL. If it is, it returns NULL.
 * Then it calculates the length of 's' and adjusts 'start' and 'len' if
 * necessary.
 * If 'start' is greater than or equal to the length of 's', it returns an
 * empty string.
 * If 'len' is greater than the length of 's', it sets 'len' to the length of
 * 's'.
 * Then it allocates memory for the substring, including space for the
 * null-terminating character.
 * If memory allocation fails, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in 's'.
 * In each iteration of the loop, it checks if the current index 'i' is within
 * the range of the substring.
 * If it is, it copies the current character from 's' to the substring.
 * Finally, it null-terminates the substring and returns it.
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
