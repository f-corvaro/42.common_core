/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:55:22 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 18:10:11 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Prints an error message to the standard error and terminates the
 * program.
 *
 * This function writes the string "Error\n" to the standard error
 * (file descriptor 2) and then calls `exit` to terminate the program with
 * a status of 1, indicating an error.
 *
 * @param None. This function does not take any parameters.
 * @return None. This function does not return a value as the program
 * is terminated.
 */
void	ft_print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
