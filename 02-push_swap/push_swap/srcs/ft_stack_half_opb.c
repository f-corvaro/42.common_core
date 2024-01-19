/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_half_opb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:53 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Performs rotation operations on the upper half of stack B.
 *
 * This function initializes the operation count, sets the total number of
 * operations, and the indices of the elements pushed from stack A and B.
 * It then determines the number of rotate operations to be performed on
 * both stacks to bring the desired elements to the top.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * their lengths.
 * @param i The index of the element in stack A to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_upper_half_b(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_a_pushed = i;
	data->idx_b_pushed = data->min_idx_num_b;
	if (i == data->min_idx_num_b)
		data->operation.rr = data->min_idx_num_b;
	else if (i < data->min_idx_num_b)
	{
		data->operation.rr = i;
		data->operation.rb = data->min_idx_num_b - i;
	}
	else if (i > data->min_idx_num_b)
	{
		data->operation.rr = data->min_idx_num_b;
		data->operation.ra = i - data->min_idx_num_b ;
	}
}

/**
 * @brief Performs rotation operations on the lower half of stack B.
 *
 * This function initializes the operation count, sets the total number
 * of operations, and the indices of the elements pushed from stack A
 * and B. It then determines the number of rotate operations to be
 * performed on both stacks to bring the desired elements to the top.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack A,
 * stack B, and their lengths.
 * @param i The index of the element in stack A to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies
 * the t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_lower_half_b(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_b_pushed = data->min_idx_num_b;
	data->idx_a_pushed = i;
	if ((data->len_a - i) == (data->len_b - data->min_idx_num_b))
		data->operation.rrr = data->len_b - data->min_idx_num_b;
	else if ((data->len_a - i) < (data->len_b - data->min_idx_num_b))
	{
		data->operation.rrr = data->len_a - i;
		data->operation.rrb = (data->len_b - data->min_idx_num_b)
			- (data->len_a - i);
	}
	else if ((data->len_a - i) > (data->len_b - data->min_idx_num_b))
	{
		data->operation.rrr = data->len_b - data->min_idx_num_b;
		data->operation.rra = (data->len_a - i)
			- (data->len_b - data->min_idx_num_b);
	}
}

/**
 * @brief Performs rotation operations on different halves of stack B.
 *
 * This function initializes the operation count, sets the total number
 * of operations, and the indices of the elements pushed from stack A and
 * B. It then determines the number of rotate operations to be performed
 * on both stacks to bring the desired elements to the top, depending on
 * whether the indices are in the upper or lower half of their respective
 * stacks.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack A, stack B,
 * and their lengths.
 * @param i The index of the element in stack A to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_diff_half_b(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_b_pushed = data->min_idx_num_b;
	data->idx_a_pushed = i;
	if (i < data->half_idx_a && data->min_idx_num_b
		>= data->half_idx_b)
	{
		data->operation.ra = i;
		data->operation.rrb = data->len_b - data->min_idx_num_b;
	}
	else if (i >= data->half_idx_a && data->min_idx_num_b
		< data->half_idx_b)
	{
		data->operation.rb = data->min_idx_num_b;
		data->operation.rra = data->len_a - i;
	}
}

/**
 * @brief Iterates over each element in stack A, finds the appropriate spot
 * for it in stack B, and performs the necessary operations to move it there.
 *
 * This function cycles through each element in stack A. For each element,
 * it first tries to find a smaller element in stack B. If it can't find
 * a smaller element, it tries to find a larger one. Once
 * it has found the appropriate spot in stack B, it calls the function
 * to perform the necessary operations to move the element from stack A to
 * that spot in stack B.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed
 * so far.
 */
void	ft_move_a_to_b(t_SortingDetails *data)
{
	int	i;

	i = 0;
	data->tot_op = 0;
	while (i < data->len_a)
	{
		data->min_idx_num_b = ft_find_smallest_in_b(data, i);
		if (data->min_idx_num_b == -1)
			data->min_idx_num_b = ft_find_largest_in_b(data, i);
		ft_c_mv_a_to_b(data, i);
		i++;
	}
}

/**
 * @brief Determines the optimal operation to move the i-th element from stack
 * A to stack B, and performs that operation.
 *
 * This function first gathers statistics about the current state of the
 * stacks. Then, it determines the optimal operation to move the i-th element
 * from stack A to stack B based on the positions of the i-th element and the
 * minimum element in their respective stacks. It performs the operation, and
 * then gathers the stack statistics again.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed
 * so far.
 * @param i The index of the element in stack A to move to stack B.
 * @return Returns 0 after performing the operation and gathering the stack
 * statistics again.
 */
int	ft_c_mv_a_to_b(t_SortingDetails *data, int i)
{
	ft_gather_stack_stats(data);
	if (i < data->half_idx_a && data->min_idx_num_b
		< data->half_idx_b)
		ft_c_upper_op_b(data, i);
	else if (i >= data->half_idx_a && data->min_idx_num_b
		>= data->half_idx_b)
		ft_c_lower_op_b(data, i);
	else
		ft_c_different_op_b(data, i);
	ft_gather_stack_stats(data);
	return (0);
}
