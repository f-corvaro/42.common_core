/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:22:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:10:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Compares two strings up to a certain number of characters.
 *
 * @param str1 The first string to be compared.
 * @param str2 The second string to be compared.
 * @param size The maximum number of characters to compare.
 *
 * This function compares up to 'size' characters of the string 'str1' to those
 * of the string 'str2'.
 * If 'size' is 0, the function returns 0.
 * If 'str1' or 'str2' is NULL and 'size' is 0, the function returns 0.
 *
 * @return int Returns an integer greater than, equal to, or less than 0,
 * if the string 'str1' is greater than, equal to, or less than the string
 * 'str2', respectively.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t	size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((str1[i] || str2[i]) && i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else
			i++;
	}
	return (0);
}
