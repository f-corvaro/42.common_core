/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:54:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:06:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @param str The string to be scanned.
 * @param c The character to be located.
 *
 * This function scans the string 'str' for the first occurrence of the
 * character 'c'.
 * The terminating null character is considered part of the string;
 * therefore if 'c' is `\0`, the function locates the terminating `\0`.
 *
 * @return char* Returns a pointer to the located character, or NULL if the
 * character does not appear in the string.
 */
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}
