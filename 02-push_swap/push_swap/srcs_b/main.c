/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:00:13 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 19:00:35 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_SortingDetails	*data;
	char				*op;

	if (ac > 1)
	{
		data = malloc(sizeof(t_SortingDetails));
		ft_init_presort_op(data, av, 1);
		op = get_next_line(0);
		while (op)
		{
			ft_perform_op(op, data);
			free(op);
			op = get_next_line(0);
		}
		free(op);
		if (ft_is_already_sorted(data) && data->len_b == 0)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		ft_dealloc_sort_data(data);
	}
	return (0);
}
