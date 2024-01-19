/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:06:47 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:25 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Initializes the operation counts in the sorting details structure.
 *
 * This function sets the count of each operation
 * (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) to zero.
 * This is done before starting the sorting process, to ensure that the counts
 * are accurate during the sorting.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process.
 * @return This function does not return a value.
 */
void	ft_init_op_count(t_SortingDetails *data)
{
	data->operation.sa = 0;
	data->operation.sb = 0;
	data->operation.ss = 0;
	data->operation.pa = 0;
	data->operation.pb = 0;
	data->operation.ra = 0;
	data->operation.rb = 0;
	data->operation.rr = 0;
	data->operation.rra = 0;
	data->operation.rrb = 0;
	data->operation.rrr = 0;
}

/**
 * @brief Checks if the elements in stack A are already sorted in ascending
 * order.
 *
 * This function iterates over each element in stack A and checks if it's
 * less than the next element. If all elements are less than their next element,
 * the function returns 1, indicating that the stack is sorted. If it finds an
 * element that is not less than the next one, it returns 0, indicating that
 * the stack is not sorted.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A and its length.
 * @return Returns 1 if the elements in stack A are sorted in ascending order,
 * and 0 otherwise.
 */
int	ft_is_already_sorted(t_SortingDetails	*data)
{
	int	i;

	i = 0;
	while (i < data->len_a - 1)
	{
		if (data->stack_a[i] < data->stack_a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * @brief Initializes the sorting details structure and prepares for sorting.
 *
 * This function counts the number of input numbers, allocates memory for the
 * stacks, initializes the sorting details structure, fills stack_a with input
 * values, checks for duplicates, initializes operation counts, and prepares
 * to start the sorting process.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process.
 * @param a A pointer to the array of command-line arguments.
 * @param f An integer flag used to control the flow of the function.
 * @return This function returns 0 after successfully initializing the sorting
 * details and preparing for sorting.
 */
int	ft_init_presort_op(t_SortingDetails *data, char **a, int f)
{
	int	counter;

	counter = ft_count_input_num(a);
	data->stack_a = malloc(sizeof(int) * counter);
	data->stack_b = malloc(sizeof(int) * counter);
	data->len_a = counter;
	data->len_b = 0;
	data->max_val_a = 0;
	data->min_val_a = 0;
	data->max_val_b = 0;
	data->min_val_b = 0;
	data->idx_str = 0;
	data->count_op = 0;
	ft_split_and_store(data, a);
	ft_check_double(data);
	ft_init_op_count(data);
	ft_sort_small_stacks(data, f);
	return (0);
}

/**
 * @brief Gathers statistical information about the current state of stacks A
 * and B.
 *
 * This function calculates and stores various statistical information
 * about the current state of stacks A and B, such as the maximum and minimum
 * values and their indices, and the midpoint indices.
 *
 * @param data A pointer to a t_SortingDetails structure that
 * holds the current state of the sorting process.
 * @return This function does not return a value. It modifies
 * the t_SortingDetails structure to store the calculated statistical
 * information.
 */
void	ft_gather_stack_stats(t_SortingDetails *data)
{
	data->max_val_a = ft_find_max_a(data);
	data->idx_max_a = ft_find_idx_max_a(data);
	data->min_val_a = ft_find_min_a(data);
	data->idx_min_a = ft_find_idx_min_a(data);
	data->max_val_b = ft_find_max_b(data);
	data->idx_max_b = ft_find_idx_max_b(data);
	data->min_val_b = ft_find_min_b(data);
	data->idx_min_b = ft_find_idx_min_b(data);
	data->half_idx_a = ft_find_mid_stack(data, 1);
	data->half_idx_b = ft_find_mid_stack(data, 0);
}
