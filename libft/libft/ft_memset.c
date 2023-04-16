/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:11:51 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 17:07:19 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		ptr [len - 1] = ch;
		len--;
	}
	return (dest);
}

/*memset function writes len bytes of value ch (converted to an
unsigned char) to the string dest. This function returns it's
first argument. ptr means pointer to.
size_t is an unsigned data type defined by standards. Is used
to rappresent the size of an object, it must be >0.
type casting is a way to convert a variable from one data type to another
data type.
*/