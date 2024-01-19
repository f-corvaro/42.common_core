/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:07:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Concatenates two strings.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 *
 * This function allocates (with malloc(3)) and returns a new string,
 * which is the result of the concatenation of 's1' and 's2'.
 * If the allocation fails, the function returns NULL.
 * If either 's1' or 's2' is NULL, the function returns 0.
 *
 * @return char* Returns the newly created string, or NULL if the allocation
 * fails.
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
