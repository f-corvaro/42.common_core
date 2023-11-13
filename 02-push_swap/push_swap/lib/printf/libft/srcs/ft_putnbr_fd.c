/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:09:15 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:52:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that writes an integer 'n' to a file descriptor 'fd'.
 *
 * Parameters:
 * - n: the integer to write.
 * - fd: the file descriptor to write to.
 *
 * The function first checks if 'n' is equal to the minimum value of an
 * integer. If it is, it writes the string "-2147483648" to 'fd' and returns.
 * Then it checks if 'n' is less than 0. If it is, it negates 'n', writes the
 * character '-' to 'fd', and calls itself recursively with 'n' and 'fd'.
 * Then it checks if 'n' is less than 10. If it is, it converts 'n' to a
 * character by adding 48 to it, and writes the character to 'fd'.
 * If 'n' is greater than or equal to 10, it calls itself recursively with 'n'
 * divided by 10 and 'fd', and then with 'n' modulo 10 and 'fd'.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10)
	{
		c = n + 48;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
