/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:43:26 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 16:05:42 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}

/*return 1 if arg is a number or 0 if it doesn't

the code below is used to test the function

#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isdigit('l'));
	printf("L is -> %d\n", ft_isdigit('L'));
	printf("9 is -> %d\n", ft_isdigit('9'));
	printf("0 is -> %d\n", ft_isdigit('0'));
	printf("2 is -> %d\n", ft_isdigit('2'));
}
*/