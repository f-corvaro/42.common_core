/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:07:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:11:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * @param str The string to be scanned.
 * @param c The character to be located.
 *
 * This function locates the last occurrence of the character 'c' (converted
 * to a char) in the string 'str'.
 * The terminating null character is considered part of the string; therefore
 * if 'c' is `\0`,
 * the functions locate the terminating `\0`.
 * If 'c' occurs nowhere in 'str', NULL is returned; otherwise a pointer to the
 * last occurrence of 'c' is returned.
 *
 * @return char* Returns a pointer to the last occurrence of the character, or
 * NULL if the character is not found.
 */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
