/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:49:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:14:02 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * @param i The character to be converted.
 *
 * This function converts an uppercase letter to the corresponding lowercase
 * letter.
 * The argument must be representable as an unsigned char or the value of EOF.
 * If the argument is an uppercase letter, the function returns the
 * corresponding lowercase letter.
 * If the argument is not an uppercase letter, the argument is returned
 * unchanged.
 *
 * @return int Returns the lowercase equivalent to the character, if the
 * character is uppercase;
 * otherwise, the character is returned unchanged.
 */
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
