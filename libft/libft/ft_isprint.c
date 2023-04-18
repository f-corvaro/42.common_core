/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:17:20 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 12:36:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}

/*the function return 1 if arg is a printable character or 0 if it doesn't

the code below is used to test the function
#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isprint('l'));
	printf("L is -> %d\n", ft_isprint('L'));
	printf("9 is -> %d\n", ft_isprint('9'));
	printf("0 is -> %d\n", ft_isprint('0'));
	printf("2 is -> %d\n", ft_isprint('2'));
	printf("space is -> %d\n", ft_isprint(' '));
}
*/