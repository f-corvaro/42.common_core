/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:48:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/31 09:22:57 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
	{
		len += ft_putptr(ptr / 16);
		len += ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			len += ft_putchar_len(ptr + '0');
		else
			len += ft_putchar_len(ptr - 10 + 'a');
	}
	return (len);
}

int	ft_pointer(unsigned long long ptr)
{
	int		len;

	len = 0;
	len += ft_putstr_len("0x");
	len += ft_putptr(ptr);
	return (len);
}
