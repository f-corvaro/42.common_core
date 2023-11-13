/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:54:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:47:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that locates the first occurrence of character 'c' in the string
 'str'.
 *
 * Parameters:
 * - str: the string in which to search for the character.
 * - c: the character to search for.
 *
 * Returns:
 * - A pointer to the first occurrence of 'c' in 'str'.
 * - NULL if 'c' does not occur in 'str' or if 'str' is NULL.
 *
 * The function first checks if 'str' is NULL. If it is, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in
 * 'str'.
 * In each iteration of the loop, it checks if the current character in 'str'
 * is equal to 'c'.
 * If it is, it returns a pointer to the current character in 'str'.
 * If 'c' does not occur in 'str', the function returns NULL.
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
