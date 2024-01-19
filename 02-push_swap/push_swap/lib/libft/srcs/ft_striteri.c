/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:06:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Applies a function to each character of a string.
 *
 * @param s The string to iterate.
 * @param f The function to apply to each character of 's'.
 *
 * This function applies the function 'f' to each character of the string 's'.
 * The function 'f' is passed the index of the character in the string and a
 * pointer to the character.
 * If the string 's' is NULL, the function does nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
