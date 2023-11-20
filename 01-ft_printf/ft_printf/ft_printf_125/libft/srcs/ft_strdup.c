/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:15:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:06:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Duplicates a string.
 *
 * @param source The string to be duplicated.
 *
 * This function allocates sufficient memory for a copy of the string 'source',
 * does the copy, and returns a pointer to it. The pointer may subsequently be
 * used as an argument to the function free(3).
 * If insufficient memory is available, NULL is returned.
 *
 * @return char* Returns a pointer to the duplicated string, or NULL if the
 * allocation fails.
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
