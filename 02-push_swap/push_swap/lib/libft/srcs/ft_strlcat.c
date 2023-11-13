/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:39:27 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:34:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that appends the string 'src' to the end of 'dest', and
 * null-terminates the result, but will not append more than 'destsize'
 * - strlen(dest) - 1 characters.
 * It will then null-terminate, unless 'destsize' is 0 or the original 'dest'
 * string was longer than 'destsize'.
 *
 * Parameters:
 * - dest: the destination string.
 * - src: the source string.
 * - destsize: the total size of the destination string.
 *
 * Returns:
 * - The total length of the string it tried to create, which is the initial
 * length of 'dest' plus the length of 'src'.
 *
 * The function first checks if 'src', 'dest', or 'destsize' is NULL or 0.
 * If any is, it returns 0.
 * Then it enters a loop that continues as long as there are characters in
 * 'dest' and 'i' is less than 'destsize'.
 * In each iteration of the loop, it increments 'i'.
 * Then it enters another loop that continues as long as there are characters
 * in 'src' and 'i + j + 1' is less than 'destsize'.
 * In each iteration of this loop, it appends the current character from 'src'
 * to 'dest' and increments 'j'.
 * After the loop, if 'i' is less than 'destsize', it null-terminates 'dest'.
 * Finally, it returns the total length of the string it tried to create.
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
