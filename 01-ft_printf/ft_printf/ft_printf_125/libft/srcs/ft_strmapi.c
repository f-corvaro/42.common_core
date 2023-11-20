/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:09:25 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Applies a function to each character of a string to create a new
 * string.
 *
 * @param s The string to iterate.
 * @param f The function to apply to each character of 's'.
 *
 * This function applies the function 'f' to each character of the string 's'
 * to create a new string.
 * The function 'f' is passed the index of the character in the string and the
 * character itself.
 * If the string 's' is NULL, the function returns NULL.
 *
 * @return char* Returns the newly created string, or NULL if the allocation
 * fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	newstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
