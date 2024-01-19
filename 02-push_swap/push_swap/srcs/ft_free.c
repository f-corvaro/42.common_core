/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:29:21 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:14 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Deallocates the memory used by the sorting data structure and
 * its associated stacks.
 *
 * This function frees the memory allocated for stack A, stack B, and
 * the t_SortingDetails structure itself.
 *
 * @param data A pointer to a t_SortingDetails structure that
 * holds the current state of the sorting process.
 * @return This function does not return a value.
 */
void	ft_dealloc_sort_data(t_SortingDetails *data)
{
	free(data->stack_a);
	free(data->stack_b);
	free(data);
}

/**
 * @brief Frees the memory allocated for a 2D array.
 *
 * @param array A pointer to a 2D array of characters.
 * @param f A flag indicating whether to free the memory for the array itself.
 * If f is 1, the memory for the array is freed. Otherwise, it is not.
 * @return Returns 1 if the memory for the array was freed, and 0 otherwise.
 */
int	ft_free_array(char **array, int f)
{
	int	i;

	i = 0;
	if (f == 1)
	{
		while (array[i])
			free(array[i++]);
		free(array);
		return (1);
	}
	return (0);
}
