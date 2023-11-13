/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:50:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:10:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that checks if a given character is alphanumeric.
 *
 * Parameters:
 * - arg: an integer representing the ASCII value of the character to check.
 *
 * Returns:
 * - 1 if the character is alphanumeric (a digit or a letter).
 * - 0 otherwise.
 *
 * The function checks if 'arg' is within the ASCII ranges for digits (48-57),
 * lowercase letters (97-122), or uppercase letters (65-90).
 * If 'arg' falls within any of these ranges, the function returns 1,
 * indicating that the character is alphanumeric.
 * Otherwise, it returns 0.
 */
int	ft_isalnum(int arg)
{
	if (((arg >= '0' && arg <= '9')
			|| (arg >= 'a' && arg <= 'z'))
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
