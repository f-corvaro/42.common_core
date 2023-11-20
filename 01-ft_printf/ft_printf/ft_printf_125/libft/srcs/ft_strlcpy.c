/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:26:59 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:08:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Copies a string to another string.
 *
 * @param dest The string to copy to.
 * @param src The string to copy from.
 * @param size The full size of 'dest', including the null byte.
 *
 * This function copies up to 'size' - 1 characters from the string 'src'
 * to 'dest',
 * and then adds a null byte. If 'size' is 0, the function does nothing.
 * If 'src' or 'dest' is NULL and 'size' is 0, the function returns 0.
 *
 * @return size_t Returns the total length of the string 'src'.
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
