/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_calc_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:42:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Calculates the number of operations needed to move an element from
 * the upper half of stack B and performs the operations.
 *
 * This function calculates the total number of operations (tm) needed to
 * move an element from the upper half of stack B to the top. If the index
 * of the element is equal to, less than, or greater than the index of the
 * minimum element in stack B, the total number of operations is set to the
 * index of the minimum element or the index of the element, respectively.
 * If the total number of operations is less than the total number of
 * operations performed so far, or if the index of the element is 0,
 * the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * their lengths.
 * @param i The index of the element in stack B to be moved.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_upper_op_b(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if (i == data->min_idx_num_b)
		tm = data->min_idx_num_b;
	else if (i < data->min_idx_num_b)
		tm = data->min_idx_num_b;
	else if (i > data->min_idx_num_b)
		tm = i;
	if ((tm < data->tot_op) || (i == 0))
		ft_r_upper_half_b(data, i, tm);
}

/**
 * @brief Calculates the number of operations needed to move an element
 * from the lower half of stack B and performs the operations.
 *
 * This function calculates the total number of operations (tm) needed
 * to move an element from the lower half of stack B to the top. If the
 * difference between the lengths of stack A and the index of the element
 * is equal to, less than, or greater than the difference between the lengths
 * of stack B and the index of the minimum element in stack B, the total
 * number of operations is set to the difference between the lengths of stack B
 * and the index of the minimum element, or the difference between the lengths
 * of stack A and the index of the element, respectively. If the total number
 * of operations is less than the total number of operations performed so far,
 * or if the index of the element is 0, the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * their lengths.
 * @param i The index of the element in stack B to be moved.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_lower_op_b(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if ((data->len_a - i) == (data->len_b - data->min_idx_num_b))
		tm = data->len_b - data->min_idx_num_b;
	else if ((data->len_a - i) < (data->len_b - data->min_idx_num_b))
		tm = data->len_b - data->min_idx_num_b;
	else if ((data->len_a - i) > (data->len_b - data->min_idx_num_b))
		tm = data->len_a - i;
	if ((tm < data->tot_op) || (i == 0))
		ft_r_lower_half_b(data, i, tm);
}

/**
 * @brief Calculates the number of operations needed to move an element from
 * different positions of stack B and performs the operations.
 *
 * This function calculates the total number of operations (tm) needed to move
 * an element from different positions of stack B to the top. If the index of
 * the element is less than the index of the middle element of stack A and the
 * index of the minimum element in stack B is greater than or equal to the
 * index of the middle element of stack B, or if the index of the element
 * is greater than or equal to the index of the middle element of stack A
 * and the index of the minimum element in stack B is less than the index of
 * the middle element of stack B, the total number of operations is set to the
 * sum of the index of the element and the difference between the lengths of
 * stack B and the index of the minimum element, or the sum of the index of
 * the minimum element and the difference between the lengths of stack A and
 * the index of the element, respectively. If the total number of operations
 * is less than the total number of operations performed so far, or if the
 * index of the element is 0, the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and their lengths.
 * @param i The index of the element in stack B to be moved.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_different_op_b(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if (i < data->half_idx_a && data->min_idx_num_b
		>= data->half_idx_b)
		tm = i + (data->len_b - data->min_idx_num_b);
	else if (i >= data->half_idx_a && data->min_idx_num_b
		< data->half_idx_b)
		tm = data->min_idx_num_b + (data->len_a - i);
	if ((tm < data->tot_op) || (i == 0))
		ft_r_diff_half_b(data, i, tm);
}
