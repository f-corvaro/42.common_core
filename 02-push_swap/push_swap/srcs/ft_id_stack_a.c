/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:01:14 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Finds the index of the maximum value in stack A.
 *
 * This function iterates over each element in stack A and keeps track of the
 * maximum value found and its index. It starts with the assumption that the
 * first element is the maximum, and updates the maximum and its index whenever
 * it finds a larger element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A.
 * @return The index of the maximum value in stack A.
 */
int	ft_find_idx_max_a(t_SortingDetails *data)
{
	int	i;
	int	max;
	int	max_idx;

	i = 0;
	max_idx = 0;
	max = data->stack_a[i];
	while (i < data->len_a)
	{
		if (data->stack_a[i] > max)
		{
			max = data->stack_a[i];
			max_idx = i;
		}
		i++;
	}
	return (max_idx);
}

/**
 * @brief Finds the maximum value in stack A.
 *
 * This function iterates over each element in stack A and keeps track of the
 * maximum value found. It starts with the assumption that the first element
 * is the maximum, and updates the maximum whenever it finds a larger element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A.
 * @return The maximum value in stack A.
 */
int	ft_find_max_a(t_SortingDetails *data)
{
	int	i;
	int	max;

	i = 0;
	max = data->stack_a[i];
	while (i < data->len_a)
	{
		if (data->stack_a[i] > max)
			max = data->stack_a[i];
		i++;
	}
	return (max);
}

/**
 * @brief Finds the index of the minimum value in stack A.
 *
 * This function iterates over each element in stack A and keeps track of
 * the minimum value found and its index. It starts with the assumption that
 * the first element is the minimum, and updates the minimum and its index
 * whenever it finds a smaller element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A.
 * @return The index of the minimum value in stack A.
 */
int	ft_find_idx_min_a(t_SortingDetails *data)
{
	int	i;
	int	min;
	int	min_idx;

	i = 0;
	min_idx = 0;
	min = data->stack_a[i];
	while (i < data->len_a)
	{
		if (data->stack_a[i] < min)
		{
			min = data->stack_a[i];
			min_idx = i;
		}
		i++;
	}
	return (min_idx);
}

/**
 * @brief Finds the minimum value in stack A.
 *
 * This function iterates over each element in stack A and keeps track of the
 * minimum value found. It starts with the assumption that the first element
 * is the minimum, and updates the minimum whenever it finds a smaller element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A.
 * @return The minimum value in stack A.
 */
int	ft_find_min_a(t_SortingDetails *data)
{
	int	i;
	int	min;

	i = 0;
	min = data->stack_a[i];
	while (i < data->len_a)
	{
		if (data->stack_a[i] < min)
			min = data->stack_a[i];
		i++;
	}
	return (min);
}
