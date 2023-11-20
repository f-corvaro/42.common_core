/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:59:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:51:10 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if the passed character is an ASCII character.
 *
 * @param arg The character to check.
 *
 * This function checks if the passed character is an ASCII character (0-127).
 * It returns 1 if the character is an ASCII character, and 0 otherwise.
 *
 * @return int Returns 1 if the character is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}
