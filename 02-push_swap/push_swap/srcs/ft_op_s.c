/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:47:01 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:38 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swaps the first two elements of stack A and updates the stack
 * statistics.
 *
 * This function swaps the first two elements of stack A if there are at least
 * two elements in the stack. After the swap, it updates the stack statistics.
 * If the 'f' parameter is 1, it also prints "sa" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed
 * so far.
 * @param f A flag that determines whether to print "sa" to the standard
 * output. If 'f' is 1, "sa" is printed.
 * @return This function does not return a value.
 */
void	ft_sa(t_SortingDetails *data, int f)
{
	int	tmp;

	tmp = 0;
	if (data->len_a == 1)
		return ;
	tmp = data->stack_a[1];
	data->stack_a[1] = data->stack_a[0];
	data->stack_a[0] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Swaps the first two elements of stack B and updates the stack
 * statistics.
 *
 * This function swaps the first two elements of stack B if there are at least
 * two elements in the stack. After the swap, it updates the stack statistics.
 * If the 'f' parameter is 1, it also prints "sb" to the standard output.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed so
 * far.
 * @param f A flag that determines whether to print "sb" to the standard output.
 * If 'f' is 1, "sb" is printed.
 * @return This function does not return a value.
 */
void	ft_sb(t_SortingDetails *data, int f)
{
	int	tmp;

	tmp = 0;
	if (data->len_b == 1)
		return ;
	tmp = data->stack_b[1];
	data->stack_b[1] = data->stack_b[0];
	data->stack_b[0] = tmp;
	if (f == 1)
		ft_printf("sb\n");
	data->count_op++;
	ft_gather_stack_stats(data);
}

/**
 * @brief Swaps the first two elements of both stacks A and B, and updates
 * the stack statistics.
 *
 * This function calls `ft_sa` and `ft_sb` to swap the first two elements
 * of stack A and stack B, respectively. If the 'f' parameter is 1, it also
 * prints "ss\n" to the standard output. After the swaps, it updates the stack
 * statistics.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, the index of the
 * minimum element in stack B, and the total number of operations performed so
 * far.
 * @param f A flag that determines whether to print "ss\n" to the standard
 * output. If 'f' is 1, "ss\n" is printed.
 * @return This function does not return a value.
 */
void	ft_ss(t_SortingDetails *data, int f)
{
	ft_sa(data, 0);
	ft_sb(data, 0);
	if (f == 1)
		ft_printf("ss\n");
	data->count_op--;
	ft_gather_stack_stats(data);
}
