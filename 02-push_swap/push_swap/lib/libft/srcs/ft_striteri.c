/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:43 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:46:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that applies a function 'f' to each character of a string 's'
 * and its index.
 *
 * Parameters:
 * - s: the string to iterate over.
 * - f: the function to apply to each character of 's' and its index.
 *
 * The function first checks if 's' is NULL. If it is, it returns without
 * doing anything.
 * Then it enters a loop that continues as long as there are characters in
 * 's'.
 * In each iteration of the loop, it applies 'f' to the current index and the
 * address of the current character in 's'.
 * The function 'f' is expected to modify the current character in 's' in
 * place.
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
