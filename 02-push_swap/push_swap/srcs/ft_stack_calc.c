/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_calc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:51:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:46 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Computes the midpoint index of either stack A or stack B.
 *
 * This function calculates the midpoint index of either stack A or stack B,
 * depending on the flag passed to it.
 * If the flag is 1, it calculates the midpoint of stack A.
 * Otherwise, it calculates the midpoint of stack B.
 * If the length of the stack is even, the midpoint is the length
 * divided by 2. If the length is odd, the midpoint is the length divided by 2
 * plus 1.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process.
 * @param f A flag indicating which stack to calculate the midpoint of.
 * If f is 1, it calculates the midpoint of stack A. Otherwise, it calculates
 * the midpoint of stack B.
 * @return The midpoint index of the specified stack.
 */
int	ft_find_mid_stack(t_SortingDetails *data, int f)
{
	int	idx;

	idx = 0;
	if (f == 1)
	{
		if ((data->len_a) % 2 == 0)
			idx = ((data->len_a) / 2);
		else
			idx = (((data->len_a) / 2) + 1);
	}
	else
	{
		if ((data->len_b) % 2 == 0)
			idx = ((data->len_b) / 2);
		else
			idx = (((data->len_b) / 2) + 1);
	}
	return (idx);
}
