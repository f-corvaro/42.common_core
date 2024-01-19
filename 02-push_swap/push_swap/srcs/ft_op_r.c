/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:46:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:33 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Performs a rotate operation on stack A and updates the stack
 * statistics.
 *
 * This function shifts up all elements of stack A by 1. The first
 * element becomes the last one. After the operation, it updates the stack
 * statistics. If the 'f' parameter is 1, it also prints "ra\n"
 * to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, the
 * index of the minimum element in stack B, and the total number of operations
 * performed so far.
 * @param f A flag that determines whether to print "ra\n" to the standard
 * output. If 'f' is 1, "ra\n" is printed.
 * @return This function does not return a value.
 */
void	ft_ra(t_SortingDetails *data, int f)
{
	int	i;
	int	tmp;
	int	len;

	i = 0;
	tmp = 0;
	len = data->len_a - 1;
	while (i < len)
	{
		tmp = data->stack_a[i + 1];
		data->stack_a[i + 1] = data->stack_a[i];
		data->stack_a[i] = tmp;
		i ++;
	}
	if (f == 1)
		ft_printf("ra\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Performs a rotate operation on stack B and updates the stack
 * statistics.
 *
 * This function shifts up all elements of stack B by 1. The first element
 * becomes the last one. After the operation, it updates the stack
 * statistics. If the 'f' parameter is 1, it also prints "rb\n" to
 * the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B,
 * the index of the minimum element in stack B, and the total number
 * of operations performed so far.
 * @param f A flag that determines whether to print "rb\n" to the
 * standard output. If 'f' is 1, "rb\n" is printed.
 * @return This function does not return a value.
 */
void	ft_rb(t_SortingDetails *data, int f)
{
	int	i;
	int	tmp;
	int	len;

	i = 0;
	tmp = 0;
	len = data->len_b - 1;
	while (i < len)
	{
		tmp = data->stack_b[i + 1];
		data->stack_b[i + 1] = data->stack_b[i];
		data->stack_b[i] = tmp;
		i ++;
	}
	if (f == 1)
		ft_printf("rb\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Performs a rotate operation on both stacks A and B, and updates
 * the stack statistics.
 *
 * This function calls `ft_ra` and `ft_rb` to perform a rotate operation
 * on stack A and stack B, respectively. After the operations, it updates the
 * stack statistics. If the 'f' parameter is 1, it also prints "rr\n" to the
 * standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B,
 * the index of the minimum element in stack B, and the total number of
 * operations performed so far.
 * @param f A flag that determines whether to print "rr\n" to the
 * standard output. If 'f' is 1, "rr\n" is printed.
 * @return This function does not return a value.
 */
void	ft_rr(t_SortingDetails *data, int f)
{
	ft_ra(data, 0);
	ft_rb(data, 0);
	if (f == 1)
		ft_printf("rr\n");
	data->count_op--;
	ft_gather_stack_stats(data);
}
