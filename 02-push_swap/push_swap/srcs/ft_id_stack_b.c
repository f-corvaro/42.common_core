/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:56:13 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Finds the index of the maximum value in stack B.
 *
 * This function iterates over each element in stack B and keeps
 * track of the maximum value found and its index. It starts with the
 * assumption that the first element is the maximum, and updates the
 * maximum and its index whenever it finds a larger element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds
 * the current state of the sorting process, including stack B.
 * @return The index of the maximum value in stack B.
 */
int	ft_find_idx_max_b(t_SortingDetails *data)
{
	int	i;
	int	max;
	int	max_idx;

	i = 0;
	max = data->stack_b[i];
	max_idx = 0;
	while (i < data->len_b)
	{
		if (data->stack_b[i] > max)
		{
			max = data->stack_b[i];
			max_idx = i;
		}
		i++;
	}
	return (max_idx);
}

/**
 * @brief Finds the maximum value in stack B.
 *
 * This function iterates over each element in stack B and keeps track
 * of the maximum value found. It starts with the assumption that the first
 * element is the maximum, and updates the maximum whenever it finds a larger
 * element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack B.
 * @return The maximum value in stack B.
 */
int	ft_find_max_b(t_SortingDetails *data)
{
	int	i;
	int	max;

	i = 0;
	max = data->stack_b[i];
	while (i < data->len_b)
	{
		if (data->stack_b[i] > max)
			max = data->stack_b[i];
		i++;
	}
	return (max);
}

/**
 * @brief Finds the index of the minimum value in stack B.
 *
 * This function iterates over each element in stack B and keeps track of the
 * minimum value found and its index. It starts with the assumption that the
 * first element is the minimum, and updates the minimum and its index whenever
 * it finds a smaller element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack B.
 * @return The index of the minimum value in stack B.
 */
int	ft_find_idx_min_b(t_SortingDetails *data)
{
	int	i;
	int	min;
	int	min_idx;

	i = 0;
	min = data->stack_b[i];
	min_idx = 0;
	while (i < data->len_b)
	{
		if (data->stack_b[i] < min)
		{
			min = data->stack_b[i];
			min_idx = i;
		}
		i++;
	}
	return (min_idx);
}

/**
 * @brief Finds the minimum value in stack B.
 *
 * This function iterates over each element in stack B and keeps track of the
 * minimum value found. It starts with the assumption that the first element
 * is the minimum, and updates the minimum whenever it finds a smaller element.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack B.
 * @return The minimum value in stack B.
 */
int	ft_find_min_b(t_SortingDetails *data)
{
	int	i;
	int	min;

	i = 0;
	min = data->stack_b[i];
	while (i < data->len_b)
	{
		if (data->stack_b[i] < min)
			min = data->stack_b[i];
		i++;
	}
	return (min);
}
