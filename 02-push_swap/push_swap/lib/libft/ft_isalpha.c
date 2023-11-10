/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:04:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 16:04:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}

/*If the parameter isn't an alphabet will return 0, otherwise, if is char
will return 1.

the code below is used to test the function

#include <stdio.h>
int	main (void)
{
	printf("l is -> %d\n", ft_isalpha('l'));
	printf("L is -> %d\n", ft_isalpha('L'));
	printf("2 is -> %d\n", ft_isalpha('2'));
}
*/