/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:38:09 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 19:02:12 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Frees allocated memory, writes an error message, and exits the
 * program.
 *
 * @param data A pointer to a t_SortingDetails structure. This structure
 * contains two stacks (stack_a and stack_b) that need to be freed.
 *
 * @return This function does not return a value. It exits the program.
 */
int	ft_error_exit(t_SortingDetails *data)
{
	free(data->stack_a);
	free(data->stack_b);
	write(2, "Error\n", 6);
	exit(0);
}

/**
 * @brief Compares two strings lexicographically.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 *
 * @return An integer less than, equal to, or greater than zero if s1
 * is found, respectively, to be less than, to match, or be greater than s2.
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/**
 * @brief Performs the operation corresponding to the given operation command.
 *
 * @param op The operation command to be performed. This should be one of the
 * following: "sa", "sb", "ss", "ra", "rb", "rr", "rra", "rrb", "rrr", "pa",
 * "pb".
 * @param data A pointer to a t_SortingDetails structure. This structure
 * contains the stacks on which the op operation will be performed.
 *
 * @return Returns 0 after successfully performing the operation. If the
 * operation command is not recognized, it calls ft_error_exit to handle the
 * error and exits the program.
 */
int	ft_perform_op(char *op, t_SortingDetails *data)
{
	if (ft_strcmp(op, "sa\n") == 0)
		ft_sa(data, 0);
	else if (ft_strcmp(op, "sb\n") == 0)
		ft_sb(data, 0);
	else if (ft_strcmp(op, "ss\n") == 0)
		ft_ss(data, 0);
	else if (ft_strcmp(op, "ra\n") == 0)
		ft_ra(data, 0);
	else if (ft_strcmp(op, "rb\n") == 0)
		ft_rb(data, 0);
	else if (ft_strcmp(op, "rr\n") == 0)
		ft_rr(data, 0);
	else if (ft_strcmp(op, "rra\n") == 0)
		ft_rra(data, 0);
	else if (ft_strcmp(op, "rrb\n") == 0)
		ft_rrb(data, 0);
	else if (ft_strcmp(op, "rrr\n") == 0)
		ft_rrr(data, 0);
	else if (ft_strcmp(op, "pa\n") == 0)
		ft_pa(data, 0);
	else if (ft_strcmp(op, "pb\n") == 0)
		ft_pb(data, 0);
	else
		ft_error_exit(data);
	return (0);
}
