/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:09:15 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:02:32 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Outputs an integer to a given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 *
 * This function writes the integer 'n' to the file descriptor 'fd'.
 * If the integer is less than 0, the function writes a '-' sign and then
 * outputs the absolute value of the integer.
 * If the integer is greater than or equal to 10, the function recursively
 * outputs the digits of the integer.
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
