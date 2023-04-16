/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:59:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 16:05:09 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}

/*if arg is an ascii return 1, or return 0 if it doesn't

the code below is used to test the function

#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isascii('l'));
	printf("L is -> %d\n", ft_isascii('L'));
	printf("9 is -> %d\n", ft_isascii('9'));
	printf("0 is -> %d\n", ft_isascii('0'));
	printf("2 is -> %d\n", ft_isascii('2'));
	printf("space is -> %d\n", ft_isascii(' '));
}
*/