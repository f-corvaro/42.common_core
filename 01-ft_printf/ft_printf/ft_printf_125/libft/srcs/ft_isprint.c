/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:17:20 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:52:03 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if the passed character is a printable ASCII character.
 *
 * @param arg The character to check.
 *
 * This function checks if the passed character is a printable ASCII character
 * (32-126).
 * It returns 1 if the character is printable, and 0 otherwise.
 *
 * @return int Returns 1 if the character is a printable ASCII character,
 * 0 otherwise.
 */
int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}
