/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:32:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that applies a function 'f' to each character of a string 's'
 * to create a new string resulting from successive applications of 'f'.
 *
 * Parameters:
 * - s: the original string.
 * - f: the function to apply to each character of 's'.
 *
 * Returns:
 * - A pointer to the newly created string.
 * - NULL if 's' is NULL or if memory allocation fails.
 *
 * The function first checks if 's' is NULL. If it is, it returns NULL.
 * Then it calculates the length of 's' and allocates memory for a new string
 * of that length, including space for the null-terminating character.
 * If memory allocation fails, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in 's'.
 * In each iteration of the loop, it applies 'f' to the current character in
 * 's' and stores the result in the corresponding position in the new string.
 * Finally, it null-terminates the new string and returns it.
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
