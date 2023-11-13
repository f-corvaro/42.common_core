/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:45:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that concatenates two strings 's1' and 's2' into a new string.
 *
 * Parameters:
 * - s1: the first string.
 * - s2: the second string.
 *
 * Returns:
 * - A pointer to the newly created string that is the concatenation of 's1'
 * and 's2'.
 * - NULL if 's1' or 's2' is NULL or if memory allocation fails.
 *
 * The function first checks if 's1' or 's2' is NULL. If either is NULL, it
 * returns NULL.
 * Then it calculates the lengths of 's1' and 's2' and allocates memory for a
 * new string of their combined length, including space for the
 * null-terminating character.
 * If memory allocation fails, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in
 * 's1'.
 * In each iteration of the loop, it copies the current character from 's1'
 * to the new string.
 * Then it enters another loop that continues as long as there are characters
 * in 's2'.
 * In each iteration of this loop, it copies the current character from 's2'
 * to the new string.
 * Finally, it null-terminates the new string and returns it.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*restr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = (size_t)ft_strlen(s1);
	j = (size_t)ft_strlen(s2);
	restr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!restr)
		return (NULL);
	i = -1;
	while (s1[++i])
		restr[i] = s1[i];
	j = 0;
	while (s2[j])
		restr[i++] = s2[j++];
	restr[i] = '\0';
	return (restr);
}
