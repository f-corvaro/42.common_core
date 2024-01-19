/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:46:57 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/19 17:45:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Performs a "push" operation from stack B to stack A and updates
 * the stack statistics.
 *
 * This function removes the first element from stack B and places it at the
 * top of stack A. After the operation, it updates the stack statistics. If
 * the 'f' parameter is 1, it also prints "pa\n" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed so
 * far.
 * @param f A flag that determines whether to print "pa\n" to the standard
 * output. If 'f' is 1, "pa\n" is printed.
 * @return This function does not return a value.
 */
void	ft_pa(t_SortingDetails *data, int f)
{
	int	i;

	i = data->len_a;
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->len_a++;
	data->stack_a[0] = data->stack_b[0];
	while (i < data->len_b)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->len_b--;
	if (f == 1)
		ft_printf("pa\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Performs a "push" operation from stack A to stack B and updates
 * the stack statistics.
 *
 * This function removes the first element from stack A and places it at
 * the top of stack B. After the operation, it updates the stack statistics.
 * If the 'f' parameter is 1, it also prints "pb\n" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, the index
 * of the minimum element in stack B, and the total number of operations
 * performed so far.
 * @param f A flag that determines whether to print "pb\n" to the standard
 * output. If 'f' is 1, "pb\n" is printed.
 * @return This function does not return a value.
 */
void	ft_pb(t_SortingDetails *data, int f)
{
	int	i;

	i = data->len_b;
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->len_b++;
	data->stack_b[0] = data->stack_a[0];
	while (i < data->len_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->len_a--;
	if (f == 1)
		ft_printf("pb\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}
