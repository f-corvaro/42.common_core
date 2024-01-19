/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:50:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:49:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if the passed character is alphanumeric.
 *
 * @param arg The character to check.
 *
 * This function checks if the passed character is either a digit (0-9) or
 * an alphabet letter (a-z or A-Z). It returns 1 if the character is
 * alphanumeric, and 0 otherwise.
 *
 * @return int Returns 1 if the character is alphanumeric, 0 otherwise.
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
