/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:39:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:11:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Locates a substring in a string, considering only the first 'n'
 * characters.
 *
 * @param src The string to be scanned.
 * @param find The substring to be located.
 * @param n The number of characters to be considered from 'src'.
 *
 * This function locates the first occurrence of the substring 'find' in the
 * string 'src',
 * where not more than 'n' characters are searched.
 * Characters that appear after a `\0` character are not searched.
 * If 'find' is an empty string, 'src' is returned; if 'find' occurs nowhere
 * in 'src', NULL is returned;
 * otherwise a pointer to the first character of the first occurrence of 'find'
 * is returned.
 *
 * @return char* Returns a pointer to the first character of the substring, or
 * NULL if the substring is not found.
 */
char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!src && !n)
		return (0);
	if (find[0] == '\0' || find == src)
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] == find[j] && (i + j) < n)
		{
			if (src[i + j] == '\0' && find[j] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (0);
}
