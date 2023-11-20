/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:36:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:59:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Compares memory areas.
 *
 * @param str1 The pointer to the first block of memory.
 * @param str2 The pointer to the second block of memory.
 * @param n The number of bytes to be compared.
 *
 * This function compares the first 'n' bytes of the memory areas 'str1' and
 * 'str2'.
 * It returns an integer less than, equal to, or greater than zero if 'str1'
 * is found,
 * respectively, to be less than, to match, or be greater than 'str2'.
 *
 * @return int Returns the difference between the two strings.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
