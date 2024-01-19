/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_preparation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:21:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:27 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Parses the input arguments and stores them in stack A.
 *
 * This function iterates over each string in the 'in' array, converts each
 * string to an integer using the 'ft_atoi_val' function, and stores the result
 * in stack A at the current 'idx_str' position. It increments 'idx_str' after
 * each insertion.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the current
 * state of the sorting process, including stack A and the 'idx_str' index.
 * @param in A pointer to an array of strings. Each string represents an integer
 * to be inserted into stack A.
 * @return A pointer to the updated t_SortingDetails structure.
 */
t_SortingDetails	*ft_parse_input(t_SortingDetails	*data, char **in)
{
	int	i;

	i = 0;
	while (in[i])
	{
		data->stack_a[data->idx_str] = ft_atoi_val(in[i]);
		data->idx_str++;
		i++;
	}
	return (data);
}

/**
 * @brief Validates the input arguments.
 *
 * This function iterates over each character in the string at index 'j'
 * of the array 'av'. It checks if each character is a digit, a space, a minus
 * sign, or a plus sign. If a minus or plus sign is found, it also checks if the
 * next character is a digit. If any of these conditions are not met, it calls
 * another function.
 *
 * @param av A pointer to an array of strings. Each string represents an
 * argument passed to the program.
 * @param j The index of the string in the 'av' array to validate.
 * @return This function does not return a value.
 */
void	ft_validate_input(char **av, int j)
{
	int		k;

	k = 0;
	while (av[j][k])
	{
		if (((av[j][k] == '-') && (!ft_isdigit(av[j][k + 1])))
		|| ((av[j][k] == '+') && (!ft_isdigit(av[j][k + 1]))))
			ft_print_error();
		if ((ft_isdigit(av[j][k])) || (av[j][k] == ' ')
			|| (av[j][k] == '-') || (av[j][k] == '+'))
			k++;
		else
			ft_print_error();
	}
}

/**
 * @brief Counts the total number of input numbers provided.
 *
 * This function takes an array of strings, which are command-line arguments,
 * splits each argument by spaces, and counts the total number of numbers
 * provided across all arguments.
 *
 * @param av The array of strings (command-line arguments).
 * @return The total count of numbers across all arguments.
 */
int	ft_count_input_num(char **av)
{
	char	**split_values;
	int		i;
	int		j;
	int		num_count;

	num_count = 0;
	j = 0;
	while (av[++j])
	{
		ft_validate_input(av, j);
		i = 0;
		split_values = ft_split(av[j], ' ');
		while (split_values[i])
			i++;
		if (i == 0)
			ft_print_error();
		else
			num_count += i;
		ft_free_array(split_values, 1);
	}
	return (num_count);
}

/**
 * @brief Splits the input strings and stores the resulting integers in stack A.
 *
 * This function iterates over each string in the 'av' array. It splits each
 * string into substrings using space (' ') as the delimiter. If the resulting
 * array contains more than one element, it calls 'ft_parse_input' to convert
 * the substrings to integers and store them in stack A. If the array only
 * contains one element, it directly converts that string to an integer using
 * 'ft_atoi_val' and stores it in stack A.
 *
 * @param data A pointer to a t_SortingDetails structure that holds the
 * current state of the sorting process, including stack A and the 'idx_str'
 * index.
 * @param av A pointer to an array of strings. Each string represents one or
 * more integers separated by spaces to be inserted into stack A.
 * @return Always returns 0. If an error occurs during the parsing or conversion
 * process, the called functions are 'ft_parse_input' or 'ft_atoi_val'.
 */
int	ft_split_and_store(t_SortingDetails *data, char **av)
{
	int		j;
	int		i;
	char	**vals;

	j = 1;
	while (av[j])
	{
		i = 0;
		vals = ft_split(av[j], ' ');
		while (vals[i])
			i++;
		if (i > 1)
			data = ft_parse_input(data, vals);
		else
		{
			data->stack_a[data->idx_str] = ft_atoi_val(vals[0]);
			data->idx_str++;
		}
		j++;
		ft_free_array(vals, 1);
	}
	return (0);
}
