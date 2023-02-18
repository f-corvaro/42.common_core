/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:11:51 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/02/18 09:55:14 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (str);
}

/*size_t is an unsigned data type defined by standards. Is used
to rappresent the size of an object, it must be >0. Memset 
function sets the first len bytes of str to the value c.
The value of c is converted to an unsigned char. The memset 
function returns a pointer to str. fill memory with a constant 
byte*/