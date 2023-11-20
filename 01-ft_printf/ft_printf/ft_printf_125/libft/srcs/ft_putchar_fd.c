/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:08:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:01:42 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Outputs a character to a given file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 *
 * This function writes the character 'c' to the file descriptor 'fd'.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
