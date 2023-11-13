/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:04:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:16:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that checks if a given character is an alphabetic character.
 *
 * Parameters:
 * - arg: an integer representing the ASCII value of the character to check.
 *
 * Returns:
 * - 1 if the character is an alphabetic character (i.e., it is within the
 * ASCII range for lowercase or uppercase letters).
 * - 0 otherwise.
 *
 * The function checks if 'arg' is within the ASCII range for lowercase letters
 * (97-122) or uppercase letters (65-90).
 * If 'arg' falls within any of these ranges, the function returns 1, indicating
 * that the character is an alphabetic character.
 * Otherwise, it returns 0.
 */
int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
