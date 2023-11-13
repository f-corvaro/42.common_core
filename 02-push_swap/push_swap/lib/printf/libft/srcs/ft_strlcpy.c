/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:26:59 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:33:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that copies up to 'size' - 1 characters from the string 'src' to
 * 'dest', null-terminating the result if 'size' is not 0.
 *
 * Parameters:
 * - dest: the destination string.
 * - src: the source string.
 * - size: the maximum number of characters to copy from 'src' to 'dest'.
 *
 * Returns:
 * - The total length of 'src'.
 *
 * The function first calculates the length of 'src'.
 * Then it checks if 'size' is greater than 0. If it is, it enters a loop that
 * continues as long as 'j' is less than 'size' - 1 and the current character
 * in 'src' is not the null-terminating character.
 * In each iteration of the loop, it copies the current character from 'src'
 * to 'dest' and increments 'j'.
 * After the loop, it null-terminates 'dest'.
 * Finally, it returns the total length of 'src'.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (j < (size - 1) && src[j])
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
