/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:15:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:46:39 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that duplicates a string.
 *
 * Parameters:
 * - source: the string to duplicate.
 *
 * Returns:
 * - A pointer to the newly created duplicate string.
 * - NULL if 'source' is NULL or if memory allocation fails.
 *
 * The function first calculates the length of 'source' and adds 1 to
 * account for the null-terminating character.
 * Then it allocates memory for a new string of that length.
 * If memory allocation fails, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in
 * 'source'.
 * In each iteration of the loop, it copies the current character from 'source'
 * to the new string.
 * Finally, it null-terminates the new string and returns it.
 */
char	*ft_strdup(const char	*source)
{
	int		len;
	char	*copy;
	int		i;

	len = ft_strlen(source) + 1;
	copy = (char *)malloc (sizeof(char) * len);
	if (!copy)
		return (NULL);
	i = 0;
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
