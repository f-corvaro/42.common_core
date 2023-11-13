/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:45:00 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:32:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that calculates the length of a string.
 *
 * Parameters:
 * - str: the string whose length is to be calculated.
 *
 * Returns:
 * - The length of 'str'.
 *
 * The function initializes a counter 'i' to 0.
 * Then it enters a loop that continues as long as the current character
 * in 'str' is not the null-terminating character.
 * In each iteration of the loop, it increments 'i'.
 * When the loop ends, 'i' is the length of 'str', so the function returns
 * 'i'.
 */
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
