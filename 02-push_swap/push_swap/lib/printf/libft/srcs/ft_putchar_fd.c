/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:08:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:53:30 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that writes a character 'c' to a file descriptor 'fd'.
 *
 * Parameters:
 * - c: the character to write.
 * - fd: the file descriptor to write to.
 *
 * The function uses the 'write' system call to write the character 'c'
 * to the file descriptor 'fd'.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
