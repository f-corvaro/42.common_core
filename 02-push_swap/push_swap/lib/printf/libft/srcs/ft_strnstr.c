/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:39:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:30:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that locates the first occurrence of the substring 'find' in the
 * string 'src', where not more than 'n' characters are searched.
 *
 * Parameters:
 * - src: the string in which to search for the substring.
 * - find: the substring to search for.
 * - n: the maximum number of characters to search in 'src'.
 *
 * Returns:
 * - A pointer to the first character of the first occurrence of 'find' in
 * 'src'.
 * - NULL if 'find' does not occur in 'src' or if 'src' is NULL.
 *
 * The function first checks if 'src' is NULL or if 'n' is 0. If either is
 * true, it returns NULL.
 * If 'find' is an empty string or if 'find' is the same as 'src', it returns
 * 'src'.
 * Then it enters a loop that continues as long as there are characters in
 * 'src'.
 * In each iteration of the loop, it enters a nested loop that continues as
 * long as the current character in 'src' is equal to the current character
 * in 'find' and the current index 'i + j' is less than 'n'.
 * If the current characters in 'src' and 'find' are both null-terminating
 * characters, it returns a pointer to the current character in 'src'.
 * If 'find' ends before 'src', it returns a pointer to the first character
 * of the first occurrence of 'find' in 'src'.
 * If 'find' does not occur in 'src', the function returns NULL.
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
