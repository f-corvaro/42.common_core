/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:47:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:36 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Performs a reverse rotate operation on stack A and updates the stack
 * statistics.
 *
 * This function shifts down all elements of stack A by 1. The last element
 * becomes the first one. After the operation, it updates the stack statistics.
 * If the 'f' parameter is 1, it also prints "rra\n" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed so
 * far.
 * @param f A flag that determines whether to print "rra\n" to the standard
 * output. If 'f' is 1, "rra\n" is printed.
 * @return This function does not return a value.
 */
void	ft_rra(t_SortingDetails *data, int f)
{
	int	i;
	int	tmp;

	i = data->len_a - 1;
	tmp = 0;
	while (i > 0)
	{
		tmp = data->stack_a[i - 1];
		data->stack_a[i - 1] = data->stack_a[i];
		data->stack_a[i] = tmp;
		i --;
	}
	if (f == 1)
		ft_printf("rra\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Performs a reverse rotate operation on stack B and updates
 * the stack statistics.
 *
 * This function shifts down all elements of stack B by 1. The last element
 * becomes the first one. After the operation, it updates the stack statistics.
 * If the 'f' parameter is 1, it also prints "rrb\n" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed so
 * far.
 * @param f A flag that determines whether to print "rrb\n" to the standard
 * output. If 'f' is 1, "rrb\n" is printed.
 * @return This function does not return a value.
 */
void	ft_rrb(t_SortingDetails *data, int f)
{
	int	i;
	int	tmp;

	i = data->len_b - 1;
	tmp = 0;
	while (i > 0)
	{
		tmp = data->stack_b[i - 1];
		data->stack_b[i - 1] = data->stack_b[i];
		data->stack_b[i] = tmp;
		i --;
	}
	if (f == 1)
		ft_printf("rrb\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Performs a reverse rotate operation on both stacks A and B,
 * and updates the stack statistics.
 *
 * This function calls `ft_rra` and `ft_rrb` to perform a reverse rotate
 * operation on stack A and stack B, respectively. After the operations, it
 * updates the stack statistics. If the 'f' parameter is 1,
 * it also prints "rrr\n" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, the
 * index of the minimum element in stack B, and the total number of
 * operations performed so far.
 * @param f A flag that determines whether to print "rrr\n" to the
 * standard output. If 'f' is 1, "rrr\n" is printed.
 * @return This function does not return a value.
 */
void	ft_rrr(t_SortingDetails *data, int f)
{
	ft_rra(data, 0);
	ft_rrb(data, 0);
	if (f == 1)
		ft_printf("rrr\n");
	data->count_op--;
	ft_gather_stack_stats(data);
}
