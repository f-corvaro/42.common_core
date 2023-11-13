/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:43:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:14:50 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that checks if a given character is a digit.
 *
 * Parameters:
 * - arg: an integer representing the ASCII value of the character to check.
 *
 * Returns:
 * - 1 if the character is a digit (i.e., it is within the ASCII range for
 * digits, which is from 48 '0' to 57 '9').
 * - 0 otherwise.
 *
 * The function checks if 'arg' is within the ASCII range for digits (48-57).
 * If 'arg' falls within this range, the function returns 1, indicating that
 * the character is a digit.
 * Otherwise, it returns 0.
 */
int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
