/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:04:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:50:32 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Checks if the passed character is an alphabet letter.
 *
 * @param arg The character to check.
 *
 * This function checks if the passed character is an alphabet letter
 * (a-z or A-Z).
 * It returns 1 if the character is an alphabet letter, and 0 otherwise.
 *
 * @return int Returns 1 if the character is an alphabet letter, 0 otherwise.
 */
int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
