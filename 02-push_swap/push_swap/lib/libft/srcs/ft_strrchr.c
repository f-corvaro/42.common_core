/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:07:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:29:34 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that finds the last occurrence of a character in a string.
 *
 * Parameters:
 * - str: the string in which to search for the character.
 * - c: the character to search for.
 *
 * Returns:
 * - A pointer to the last occurrence of 'c' in 'str'.
 * - NULL if 'c' is not found in 'str' or if 'str' is NULL.
 *
 * The function first calculates the length of 'str' using the 'ft_strlen'
 * function.
 * Then it enters a loop that continues as long as 'i' is greater than or
 * equal to 0.
 * In each iteration of the loop, it checks if the current character in 'str'
 * is equal to 'c'.
 * If it is, it returns a pointer to the current character.
 * If 'c' is not found in 'str', the function returns NULL.
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
