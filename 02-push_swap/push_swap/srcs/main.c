/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:35:12 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:11:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_SortingDetails	*data;

	if (ac > 1)
	{
		data = malloc(sizeof(t_SortingDetails));
		ft_init_presort_op(data, av, 0);
		ft_sort_stacks(data);
		ft_dealloc_sort_data(data);
	}
	return (0);
}
