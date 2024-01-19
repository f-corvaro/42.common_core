/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:53:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:55 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Copies the contents of stack A into a new array.
 *
 * This function creates a new array of integers and copies the contents
 * of stack A from the provided t_SortingDetails structure into this new array.
 * The size of the new array is determined by the length of stack A.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and the counts of
 * different operations to be performed.
 * @return A pointer to the new array containing the copied contents of stack A.
 */
int	*ft_copy_stack_a(t_SortingDetails *data)
{
	int		i;
	int		j;
	int		*res;

	res = malloc(data->len_a * sizeof(int));
	i = 0;
	j = 0;
	while (i < data->len_a)
	{
		res[j] = data->stack_a[i];
		i++;
		j++;
	}
	return (res);
}

/**
 * @brief Checks for duplicate values in stack A.
 *
 * This function creates a copy of stack A and then checks for any duplicate
 * values in the original stack A. If any duplicates are found, it calls
 * ft_print_error() to handle the error.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * the counts of different operations to be performed.
 * @return Returns 0 after successfully checking for duplicates.
 * Note that if a duplicate is found, ft_print_error() is called.
 */
int	ft_check_double(t_SortingDetails *data)
{
	int		i;
	int		j;
	int		*tmp_stack;

	i = 0;
	tmp_stack = ft_copy_stack_a(data);
	while (i < data->len_a)
	{
		j = 0;
		while (j < data->len_a)
		{
			if (i != j && data->stack_a[j] == tmp_stack[i])
				ft_print_error();
			j++;
		}
		i++;
	}
	free(tmp_stack);
	return (0);
}

/**
 * @brief Performs a "sa" operation followed by a "ra" operation on stack A.
 *
 * This function first swaps the top two elements of stack A ("sa" operation)
 * and then rotates stack A upwards by one position ("ra" operation). Both
 * operations are performed using the provided t_SortingDetails structure.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A, stack B, and
 * the counts of different operations to be performed.
 * @return This function does not return a value.
 */
void	ft_pd(t_SortingDetails *data)
{
	ft_sa(data, 1);
	ft_ra(data, 1);
}

/**
 * @brief Rotates or reverse rotates stack A to move the minimum value to
 * the top.
 *
 * This function checks if the index of the minimum value in stack A is
 * greater than the half index of stack A.
 * If it is, it performs a rotate operation on stack A until the minimum
 * value is at the top.
 * Otherwise, it performs a reverse rotate operation on stack A until the
 * minimum value is at the top.
 * After each rotate or reverse rotate operation, it updates the data of
 * the stacks.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process.
 * @return This function does not return a value. It modifies the state of
 * stack A in the t_SortingDetails structure.
 */
void	ft_rotate_min_a_to_top(t_SortingDetails *data)
{
	if (data->half_idx_a > data->idx_min_a)
	{
		while (data->idx_min_a > 0)
		{
			ft_ra(data, 1);
			ft_gather_stack_stats(data);
		}
	}
	else
	{
		while (data->idx_min_a > 0)
		{
			ft_rra(data, 1);
			ft_gather_stack_stats(data);
		}
	}
}
