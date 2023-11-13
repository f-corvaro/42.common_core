/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:08:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:53:19 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that writes a string 's' to a file descriptor 'fd', followed
 by a newline.
 *
 * Parameters:
 * - s: the string to write.
 * - fd: the file descriptor to write to.
 *
 * The function first checks if 's' is NULL. If it is, it returns without
 * doing anything.
 * Then it enters a loop that continues as long as there are characters in
 * 's'.
 * In each iteration of the loop, it writes the current character to 'fd' and
 * increments the pointer to 's'.
 * Finally, it writes a newline character to 'fd'.
 */
void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &(*s++), 1);
	write(fd, "\n", 1);
}
