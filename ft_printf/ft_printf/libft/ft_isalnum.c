/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:50:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 16:02:59 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (((arg >= '0' && arg <= '9')
			|| (arg >= 'a' && arg <= 'z'))
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}

/*return 1 if arg is alphanumeric or 0 if it doesn't

the code below is used to test the function

#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isalnum('l'));
	printf("L is -> %d\n", ft_isalnum('L'));
	printf("9 is -> %d\n", ft_isalnum('9'));
	printf("0 is -> %d\n", ft_isalnum('0'));
	printf("2 is -> %d\n", ft_isalnum('2'));
	printf("space is -> %d\n", ft_isalnum(' '));
}
*/