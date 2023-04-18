/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:11:51 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 15:54:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>*/

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

the code below is used to test the function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[15];
	strcpy(str, "daje Roma daje");
	puts(str);
	memset(str, 'a', 10);
	puts(str);
	return (0);
}
*/
