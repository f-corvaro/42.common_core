/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_calc_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:34:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Calculates the number of operations needed to move an element
 * from the upper half of stack A and performs the operations.
 *
 * This function calculates the total number of operations (tm) needed to
 * move an element from the upper half of stack A to the top. If the index of
 * the element is less than or equal to the index of the minimum element in
 * stack A, or greater than the index of the minimum element, the total number
 * of operations is set to the index of the minimum element or the index of the
 * element, respectively. If the total number of operations is less than the
 * total number of operations performed so far, or if the index of the element
 * is 0, the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and their lengths.
 * @param i The index of the element in stack A to be moved.
 * @return void This function does not return a value. It modifies the
 * t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_upper_op_a(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if (i == data->min_idx_num_a)
		tm = data->min_idx_num_a;
	else if (i < data->min_idx_num_a)
		tm = data->min_idx_num_a;
	else if (i > data->min_idx_num_a)
		tm = i;
	if ((tm < data->tot_op) || (i == 0))
		ft_r_upper_half_a(data, i, tm);
}

/**
 * @brief Calculates the number of operations needed to move an element
 * from the lower half of stack A and performs the operations.
 *
 * This function calculates the total number of operations (tm) needed
 * to move an element from the lower half of stack A to the top. If the
 * difference between the lengths of stack B and the index of the element
 * is equal to, less than, or greater than the difference between the
 * lengths of stack A and the index of the minimum element in stack A,
 * the total number of operations is set to the difference between the
 * lengths of stack A and the index of the minimum element, or the
 * difference between the lengths of stack B and the index of the element,
 * respectively. If the total number of operations is less than the total
 * number of operations performed so far, or if the index of the element
 * is 0, the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B,
 * and their lengths.
 * @param i The index of the element in stack A to be moved.
 * @return void This function does not return a value. It modifies the
 t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_lower_op_a(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if ((data->len_b - i) == (data->len_a - data->min_idx_num_a))
		tm = data->len_a - data->min_idx_num_a;
	else if ((data->len_b - i) < (data->len_a - data->min_idx_num_a))
		tm = data->len_a - data->min_idx_num_a;
	else if ((data->len_b - i) > (data->len_a - data->min_idx_num_a))
		tm = data->len_b - i;
	if ((tm < data->tot_op) || (i == 0))
		ft_r_lower_half_a(data, i, tm);
}

/**
 * @brief Calculates the number of operations needed to move an
 * element from different positions of stack A and performs the
 * operations.
 *
 * This function calculates the total number of operations (tm)
 needed to move an element from different positions of stack A
 to the top. If the index of the element is less than the index
 of the middle element of stack B and the index of the minimum
 element in stack A is greater than or equal to the index of the
 middle element of stack A, or if the index of the element is
 greater than or equal to the index of the middle element of
 stack B and the index of the minimum element in stack A is less
 than the index of the middle element of stack A, the total number
 of operations is set to the sum of the index of the element and the
 difference between the lengths of stack A and the index of the
 minimum element, or the sum of the index of the minimum element
 and the difference between the lengths of stack B and the index
 of the element, respectively. If the total number of operations
 is less than the total number of operations performed so far, or
 if the index of the element is 0, the function performs the operations.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack A,
 * stack B, and their lengths.
 * @param i The index of the element in stack A to be moved.
 * @return void This function does not return a value. It modifies
 * the t_SortingDetails structure pointed to by the data parameter.
 */
void	ft_c_different_op_a(t_SortingDetails *data, int i)
{
	int	tm;

	tm = 0;
	if (i < data->half_idx_b && data->min_idx_num_a
		>= data->half_idx_a)
		tm = i + (data->len_a - data->min_idx_num_a);
	else if (i >= data->half_idx_b && data->min_idx_num_a
		< data->half_idx_a)
		tm = data->min_idx_num_a + (data->len_b - i);
	if ((tm < data->tot_op) || (i == 0))
		ft_r_diff_half_a(data, i, tm);
}
