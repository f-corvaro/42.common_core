/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:48:44 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 23:18:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unlen(unsigned int str)
{
	int	len;

	len = 0;
	while (str != 0)
	{
		len++;
		str = str / 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int num)
{
	char	*str;
	int		len;

	len = ft_unlen(num);
	str = (char *)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

int	ft_unsigned(unsigned int num)
{
	int		len;
	char	*str;

	len = 0;
	if (num == 0)
		len += write (1, "0", 1);
	else
	{
		str = ft_utoa(num);
		len += ft_putstr_len(str);
		free(str);
	}
	return (len);
}
