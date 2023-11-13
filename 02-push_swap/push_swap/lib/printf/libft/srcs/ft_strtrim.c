/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:28:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	check_set(char const c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/*
 * A function that trims the start and end of a string by removing characters
 that are present in a given set.
 *
 * Parameters:
 * - s1: the original string to trim.
 * - set: the set of characters to remove.
 *
 * Returns:
 * - A new string that is a trimmed version of 's1'.
 * - NULL if 's1' or 'set' is NULL or if memory allocation fails.
 *
 * The function first checks if 's1' or 'set' is NULL. If either is NULL,
 * it returns NULL.
 * Then it finds the first character in 's1' that is not in 'set' and the
 * last character in 's1' that is not in 'set'.
 * It allocates memory for a new string that can hold the characters betweenm
 * these two characters, including space for the null-terminating character.
 * If memory allocation fails, it returns NULL.
 * Then it copies the characters between these two characters from 's1' to
 * the new string.
 * Finally, it null-terminates the new string and returns it.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	j = ft_strlen((char *)s1);
	while ((j > i) && check_set(s1[j - 1], set))
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!new)
		return (NULL);
	while (i < j)
		new[k++] = s1[i++];
	new[k] = 0;
	return ((char *)new);
}
