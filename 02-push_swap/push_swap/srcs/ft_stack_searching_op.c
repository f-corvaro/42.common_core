/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_searching_op.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:09:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/19 18:02:12 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Finds the index of the first number in stack B
 * that is larger than a given number in stack A.
 *
 * This function iterates over each number in stack B. For each number,
 * it checks if it is larger than the number at index i in stack A.
 * If it is, and if it is also larger than the current largest number
 * found in stack B (or if this is the first number checked), it updates
 * the index of the largest number.
 * It continues this process until it has checked all numbers in stack B.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process.
 * @param i The index of the number in stack A to compare against.
 * @return The index of the first number in stack B that is larger than
 * the number at index i in stack A. If no such number is found, it returns -1.
 */
int	ft_find_largest_in_b(t_SortingDetails *data, int i)
{
	int	j;
	int	idx;

	j = 0;
	idx = -1;
	while (j < data->len_b)
	{
		if (data->stack_b[j] > data->stack_a[i]
			&& (idx == -1 || data->stack_b[j] > data->stack_b[idx]))
			idx = j;
		j++;
	}
	return (idx);
}

/**
 * @brief Finds the smallest element in stack_b that is less than a
 * specific element in stack_a.
 *
 * @param data A pointer to a SortingDetails structure containing the
 * details of the sorting operation.
 * @param i The index of the element in stack_a to compare with.
 *
 * @return The index of the smallest element in stack_b that is less
 * than stack_a[i]. If no such element is found, returns -1.
 */
int	ft_find_smallest_in_b(t_SortingDetails *data, int i)
{
	int	j;
	int	idx;

	j = 0;
	idx = -1;
	while (j < data->len_b)
	{
		if (data->stack_b[j] < data->stack_a[i]
			&& (idx == -1 || data->stack_b[j] > data->stack_b[idx]))
			idx = j;
		j++;
	}
	return (idx);
}

/**
 * @brief Finds the index of the smallest value in stack A that is greater
 * than a specific value in stack B.
 *
 * This function iterates over stack A and finds the index of the smallest
 * value that is greater than the i-th value of stack B. If multiple such
 * values are found, it returns the index of the one with the smallest value.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A, stack B, and their lengths.
 * @param i The index of the value in stack B that the values in stack A are
 * compared to.
 * @return The index of the smallest value in stack A that is greater than
 * the i-th value of stack B. If no such value is found, it returns -1.
 */
int	ft_find_smallest_great_in_a(t_SortingDetails *data, int i)
{
	int	j;
	int	idx;

	j = 0;
	idx = -1;
	while (j < data->len_a)
	{
		if (data->stack_a[j] > data->stack_b[i]
			&& (idx == -1 || data->stack_a[j] < data->stack_a[idx]))
			idx = j;
		j++;
	}
	return (idx);
}

/**
 * @brief Finds the index of the smallest value in stack A that is less than
 * a specific value in stack B.
 *
 * This function iterates over stack A and finds the index of the smallest
 * value that is less than the i-th value of stack B. If multiple such values
 * are found, it returns the index of the smallest one.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack A, stack B,
 * and the counts of different operations to be performed.
 * @param i The index of the value in stack B that the values in stack
 * A are compared to.
 * @return The index of the smallest value in stack A that is less
 * than the i-th value of stack B. If no such value is found, it returns -1.
 */
int	ft_find_smallest_less_in_a(t_SortingDetails *data, int i)
{
	int	j;
	int	idx;

	j = 0;
	idx = -1;
	while (j < data->len_a)
	{
		if (data->stack_a[j] < data->stack_b[i]
			&& (idx == -1 || data->stack_a[j] < data->stack_a[idx]))
			idx = j;
		j++;
	}
	return (idx);
}
