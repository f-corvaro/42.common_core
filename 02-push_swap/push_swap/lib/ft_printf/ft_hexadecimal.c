/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:48:37 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 22:57:37 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_puthex(unsigned int num, const char spec)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, spec);
		ft_puthex(num % 16, spec);
	}
	else
	{
		if (num <= 9)
			ft_putchar_len((num + '0'));
		else
		{
			if (spec == 'x')
				ft_putchar_len((num - 10 + 'a'));
			if (spec == 'X')
				ft_putchar_len((num - 10 + 'A'));
		}
	}
}

int	ft_hex(unsigned int num, const char spec)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, spec);
	return (ft_hexlen(num));
}
