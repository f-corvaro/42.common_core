/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:08:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:01:56 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Outputs a string to a given file descriptor, followed by a newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 *
 * This function writes the string 's' to the file descriptor 'fd', followed
 * by a newline.
 * If the string 's' is NULL, the function does nothing.
 */
void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &(*s++), 1);
	write(fd, "\n", 1);
}
