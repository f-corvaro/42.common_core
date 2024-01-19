/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:17:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:11:01 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Executes a series of sorting operations on two stacks.
 *
 * This function performs a series of operations on two stacks based on the
 * counts stored in the `operation` field of the `data` structure. The
 * operations include "pa", "pb", "ra", "rb", "rr", "rra", "rrb", and "rrr".
 * After all operations have been executed, it performs a final "pb" or "pa"
 * operation based on the value of 'f'.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and the counts of
 * different operations to be performed.
 * @param f A flag that determines the final operation to be performed. If 'f'
 * is 0, a "pb" operation is performed. If 'f' is 1, a "pa" operation is
 * performed.
 * @return This function does not return a value.
 */
void	ft_exe_sorting_op(t_SortingDetails *data, int f)
{
	while (data->operation.pa-- > 0)
		ft_pa(data, 1);
	while (data->operation.pb-- > 0)
		ft_pb(data, 1);
	while (data->operation.ra-- > 0)
		ft_ra(data, 1);
	while (data->operation.rb-- > 0)
		ft_rb(data, 1);
	while (data->operation.rr-- > 0)
		ft_rr(data, 1);
	while (data->operation.rra-- > 0)
		ft_rra(data, 1);
	while (data->operation.rrb-- > 0)
		ft_rrb(data, 1);
	while (data->operation.rrr-- > 0)
		ft_rrr(data, 1);
	if (f == 0)
		ft_pb(data, 1);
	else if (f == 1)
		ft_pa(data, 1);
}

/**
 * @brief Sorts the top three elements of stack A.
 *
 * This function sorts the top three elements of stack A in ascending order.
 * It uses a series of conditional checks to determine the current order of
 * the elements and then performs the necessary operations
 * ("sa", "ra", or "rra") to sort them.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and the counts of
 * different operations to be performed.
 * @return This function does not return a value.
 */
void	ft_sort_three_elements(t_SortingDetails *data)
{
	if ((data->stack_a[0] < data->stack_a[1])
		&& (data->stack_a[0] < data->stack_a[2])
		&& (data->stack_a[1] > data->stack_a[2]))
	{
		ft_pd(data);
	}
	else if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[0] > data->stack_a[2])
		&& (data->stack_a[1] > data->stack_a[2]))
	{
		ft_sa(data, 1);
		ft_rra(data, 1);
	}
	else if ((data->stack_a[0] < data->stack_a[1])
		&& (data->stack_a[0] > data->stack_a[2])
		&& (data->stack_a[1] > data->stack_a[2]))
		ft_rra(data, 1);
	else if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[0] > data->stack_a[2])
		&& (data->stack_a[1] < data->stack_a[2]))
		ft_ra(data, 1);
	else if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[0] < data->stack_a[2])
		&& (data->stack_a[1] < data->stack_a[2]))
		ft_sa(data, 1);
}

/**
 * @brief Sorts a small stacks of length 2 or 3.
 *
 * This function checks if the stacks is already sorted. If not, it sorts
 * the stacks using the appropriate sorting algorithm based on the stacks
 * length:
 * If the stacks is of length 2, it uses a simple swap operation.
 * If the stacks is of length 3, it uses the function.
 * After sorting the stacks, it terminates the program using `exit(0)`.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process.
 * @param f An integer that indicates whether to sort the stacks.
 * If f is 0 and the stacks length is 2 or 3, the stacks is sorted.
 * @return This function does not return a value. It sorts the stacks in
 * place and then terminates the program.
 */
void	ft_sort_small_stacks(t_SortingDetails *data, int f)
{
	if (f == 0 && data->len_a <= 3)
	{
		if (data->len_a == 2 && !ft_is_already_sorted(data))
		{
			ft_sa(data, 1);
			exit(0);
		}
		else if (data->len_a == 3 && !ft_is_already_sorted(data))
		{
			ft_sort_three_elements(data);
			exit(0);
		}
		else
			exit(0);
	}
}

/**
 * @brief Executes the entire sorting process on the input stacks.
 *
 * This function first checks if the array is already sorted. If not, it pushes
 * the first two elements of stack A to stack B.
 * It then enters a loop where it continues to sort the remaining elements in
 * stack A and push them to stack B until only three elements are left in
 * stack A.
 * It then sorts these three elements in stack A using the
 * function.
 * After that, it enters another loop where it continues to sort the
 * elements in stack B and push them back to stack A until stack B is empty.
 * Finally, it rotates stack A to bring the minimum value to the top.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process.
 * @return This function does not return a value. It modifies the state of the
 * stacks in the t_SortingDetails structure.
 */
void	ft_sort_stacks(t_SortingDetails *data)
{
	if (!ft_is_already_sorted(data))
	{
		ft_pb(data, 1);
		ft_pb(data, 1);
		while (data->len_a > 3)
		{
			ft_move_a_to_b(data);
			ft_exe_sorting_op(data, 0);
		}
		ft_sort_three_elements(data);
		while (data->len_b > 0)
		{
			ft_move_b_to_a(data);
			ft_exe_sorting_op(data, 1);
		}
		ft_rotate_min_a_to_top(data);
	}
}
