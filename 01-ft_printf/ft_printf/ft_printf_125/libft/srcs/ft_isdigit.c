/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:43:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:51:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if the passed character is a digit.
 *
 * @param arg The character to check.
 *
 * This function checks if the passed character is a digit (0-9).
 * It returns 1 if the character is a digit, and 0 otherwise.
 *
 * @return int Returns 1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
