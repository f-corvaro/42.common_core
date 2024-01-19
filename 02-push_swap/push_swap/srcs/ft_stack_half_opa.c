/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_half_opa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:07:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Performs rotation operations on the upper half of stack A.
 *
 * This function initializes the operation count, sets the total number
 * of operations, and the indices of the elements pushed from stack A and B.
 * It then determines the number of rotate operations to be performed on
 * both stacks to bring the desired elements to the top.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and their lengths.
 * @param i The index of the element in stack B to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_upper_half_a(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_b_pushed = i;
	data->idx_a_pushed = data->min_idx_num_a;
	if (i == data->min_idx_num_a)
		data->operation.rr = data->min_idx_num_a;
	else if (i < data->min_idx_num_a)
	{
		data->operation.rr = i;
		data->operation.ra = data->min_idx_num_a - i;
	}
	else if (i > data->min_idx_num_a)
	{
		data->operation.rr = data->min_idx_num_a;
		data->operation.rb = i - data->min_idx_num_a;
	}
}

/**
 * @brief Performs rotation operations on the lower half of stack A.
 *
 * This function initializes the operation count, sets the total number
 * of operations, and the indices of the elements pushed from stack A
 * and B. It then determines the number of rotate operations to be
 * performed on both stacks to bring the desired elements to the top.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack A,
 * stack B, and their lengths.
 * @param i The index of the element in stack B to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies
 * the t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_lower_half_a(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_a_pushed = data->min_idx_num_a;
	data->idx_b_pushed = i;
	if ((data->len_b - i) == (data->len_a - data->min_idx_num_a))
		data->operation.rrr = data->len_a - data->min_idx_num_a;
	else if ((data->len_b - i) < (data->len_a - data->min_idx_num_a))
	{
		data->operation.rrr = data->len_b - i;
		data->operation.rra = (data->len_a - data->min_idx_num_a)
			- (data->len_b - i);
	}
	else if ((data->len_b - i) > (data->len_a - data->min_idx_num_a))
	{
		data->operation.rrr = data->len_a - data->min_idx_num_a;
		data->operation.rrb = (data->len_b - i)
			- (data->len_a - data->min_idx_num_a);
	}
}

/**
 * @brief Performs rotation operations on different halves of stack A.
 *
 * This function initializes the operation count, sets the total number
 * of operations, and the indices of the elements pushed from stack A and
 * B. It then determines the number of rotate operations to be performed
 * on both stacks to bring the desired elements to the top, depending on
 * whether the indices are in the upper or lower half of their respective
 * stacks.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * their lengths.
 * @param i The index of the element in stack B to be pushed.
 * @param tm The total number of operations to be performed.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_r_diff_half_a(t_SortingDetails *data, int i, int tm)
{
	ft_init_op_count(data);
	data->tot_op = tm;
	data->idx_a_pushed = data->min_idx_num_a;
	data->idx_b_pushed = i;
	if (i < data->half_idx_b && data->min_idx_num_a
		>= data->half_idx_a)
	{
		data->operation.rb = i;
		data->operation.rra = data->len_a - data->min_idx_num_a;
	}
	else if (i > data->half_idx_b && data->min_idx_num_a
		< data->half_idx_a)
	{
		data->operation.rrb = data->len_b - i;
		data->operation.ra = i - data->min_idx_num_a ;
	}
}

/**
 * @brief Moves all elements from stack B to stack A in a sorted order.
 *
 * This function iterates over each element in stack B, finds the smallest
 * element in stack A that is greater than the current element in stack B,
 * and moves the current element to the appropriate position in stack A.
 * If there is no element in stack A that is greater than the current
 * element in stack B, the function finds the smallest element in stack
 * A that is less than the current element and moves the current element
 * to the appropriate position in stack A.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * their lengths.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_move_b_to_a(t_SortingDetails *data)
{
	int	i;

	i = 0;
	data->tot_op = 0;
	while (i < data->len_b)
	{
		data->min_idx_num_a = ft_find_smallest_great_in_a(data, i);
		if (data->min_idx_num_a == -1)
			data->min_idx_num_a = ft_find_smallest_less_in_a(data, i);
		ft_c_mv_b_to_a(data, i);
		i++;
	}
}

/**
 * @brief Determines the optimal operations to move an element from stack B
 * to stack A.
 *
 * This function calculates the optimal operations to move an element from
 * stack B to stack A based on the current state of the stacks. It first
 * gathers statistics about the stacks, then determines whether to perform
 * upper, lower, or different operations on stack A based on the position of
 * the element in stack B and the position of the minimum element in stack A.
 * After performing the operations, it gathers statistics about the stacks
 * again.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and their lengths.
 * @param i The index of the element in stack B to be moved.
 * @return int This function returns 0 after successfully performing the
 * operations.
 */
int	ft_c_mv_b_to_a(t_SortingDetails *data, int i)
{
	ft_gather_stack_stats(data);
	if (i < data->half_idx_b && data->min_idx_num_a
		< data->half_idx_a)
		ft_c_upper_op_a(data, i);
	else if (i >= data->half_idx_b && data->min_idx_num_a
		>= data->half_idx_a)
		ft_c_lower_op_a(data, i);
	else
		ft_c_different_op_a(data, i);
	ft_gather_stack_stats(data);
	return (0);
}
