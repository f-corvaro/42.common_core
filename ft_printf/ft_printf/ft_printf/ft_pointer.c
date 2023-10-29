/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:48:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 23:16:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

int	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_len(ptr + 48);
		else
			ft_putchar_len(ptr - 10 + 'a');
	}
	return (ft_ptrlen(ptr));
}

int	ft_pointer(unsigned long long ptr)
{
	int		len;

	len = 0;
	if (ptr == 0)
	{
		len += write (1, "(nil)", 5);
		return (len);
	}
	len = write (1, "0x", 2);
	len += ft_putptr(ptr);
	return (len);
}