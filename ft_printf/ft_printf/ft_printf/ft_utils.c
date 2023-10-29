/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:04:14 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 22:32:31 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(char c)
{
	write (1, &c, 1);
	return (1);
}
/*  ft_putchar but returning the lenght writed  */

int	ft_putstr_len(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}
/*  ft_putstr but returning the lenght writed  */

int	ft_putnumb_len(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	len = ft_putstr_len(str);
	free(str);
	return (len);
}
/*  ft_putnumb but returning the lenght writed  */