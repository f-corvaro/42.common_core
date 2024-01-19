/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:39:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:07:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Appends a string to the end of another string.
 *
 * @param dest The string to be appended to.
 * @param src The string to append to 'dest'.
 * @param destsize The full size of 'dest', including the null byte.
 *
 * This function appends the string 'src' to the end of the string 'dest',
 * up to 'destsize' - strlen(dest) - 1 characters, and then adds a null byte.
 * If 'destsize' is less than or equal to the length of 'dest', the function
 * does nothing.
 * If 'src' or 'dest' is NULL and 'destsize' is 0, the function returns 0.
 *
 * @return size_t Returns the total length of the string 'dest' would have been
 * if there was enough space.
 */
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
