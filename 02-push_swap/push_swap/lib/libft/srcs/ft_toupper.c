/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:28:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:26:02 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that converts a lowercase letter to uppercase.
 *
 * Parameters:
 * - i: an integer representing the ASCII value of the character to convert.
 *
 * Returns:
 * - The ASCII value of the uppercase version of the input character, if it
 * is a lowercase letter.
 * - The original input value, if it is not a lowercase letter.
 *
 * The function checks if 'i' is within the ASCII range for lowercase letters
 * (97-122).
 * If 'i' falls within this range, the function subtracts 32 from it to convert
 * it to the corresponding uppercase letter and returns the result.
 * If 'i' is not a lowercase letter, the function returns 'i' unchanged.
 */
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
