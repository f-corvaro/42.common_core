/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:59:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:15:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that checks if a given character is an ASCII character.
 *
 * Parameters:
 * - arg: an integer representing the ASCII value of the character to check.
 *
 * Returns:
 * - 1 if the character is an ASCII character (i.e., it is within the ASCII
 * range, which is from 0 to 127).
 * - 0 otherwise.
 *
 * The function checks if 'arg' is within the ASCII range (0-127).
 * If 'arg' falls within this range, the function returns 1, indicating that
 * the character is an ASCII character.
 * Otherwise, it returns 0.
 */
int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}
