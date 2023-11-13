/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:49:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:26:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that converts an uppercase letter to lowercase.
 *
 * Parameters:
 * - i: an integer representing the ASCII value of the character to convert.
 *
 * Returns:
 * - The ASCII value of the lowercase version of the input character, if it
 * is an uppercase letter.
 * - The original input value, if it is not an uppercase letter.
 *
 * The function checks if 'i' is within the ASCII range for uppercase letters
 * (65-90).
 * If 'i' falls within this range, the function adds 32 to it to convert it
 * to the corresponding lowercase letter and returns the result.
 * If 'i' is not an uppercase letter, the function returns 'i' unchanged.
 */
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
