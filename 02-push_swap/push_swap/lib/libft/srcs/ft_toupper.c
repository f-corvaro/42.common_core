/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:28:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:14:53 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * @param i The character to be converted.
 *
 * This function converts a lowercase letter to the corresponding uppercase
 * letter.
 * The argument must be representable as an unsigned char or the value of EOF.
 * If the argument is a lowercase letter, the function returns the corresponding
 * uppercase letter.
 * If the argument is not a lowercase letter, the argument is returned
 * unchanged.
 *
 * @return int Returns the uppercase equivalent to the character, if the
 * character is lowercase;
 * otherwise, the character is returned unchanged.
 */
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
