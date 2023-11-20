/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:12:30 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if a character is in a string.
 *
 * @param c The character to be checked.
 * @param str The string to be scanned.
 *
 * This function checks if the character 'c' is in the string 'str'.
 * If 'c' is found in 'str', the function returns 1; otherwise, it returns 0.
 *
 * @return int Returns 1 if the character is found, or 0 if the character is
 * not found.
 */
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

/**
 * @brief Trims the start and end of a string with the characters of a set.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to trim from 's1'.
 *
 * This function trims the start and end of the string 's1' with the characters
 * of 'set'.
 * It allocates (with malloc(3)) and returns a copy of 's1' with the characters
 * of 'set' removed
 * from the start and the end of the string.
 * If the allocation fails, the function returns NULL.
 * If 's1' or 'set' is NULL, the function returns NULL.
 *
 * @return char* Returns the trimmed string, or NULL if the allocation fails or
 * 's1' or 'set' is NULL.
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
