/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:17:20 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:14:04 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that checks if a given character is printable.
 *
 * Parameters:
 * - arg: an integer representing the ASCII value of the character to check.
 *
 * Returns:
 * - 1 if the character is printable (i.e., it is within the ASCII range for
 * printable characters, which is from 32 ' ' (space) to 126 '~').
 * - 0 otherwise.
 *
 * The function checks if 'arg' is within the ASCII range for printable
 * characters (32-126).
 * If 'arg' falls within this range, the function returns 1, indicating that
 * the character is printable.
 * Otherwise, it returns 0.
 */
int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}
