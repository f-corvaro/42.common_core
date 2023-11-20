/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:49:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 18:44:40 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}

/*tolower function converts a
uppercase alphabet to an lowercase alphabet.

the code below is used to test the function

#include <stdio.h>

int	main(void)
{
	printf("D diventa -> %d\n", ft_tolower('D'));
	printf("F diventa -> %d\n", ft_tolower('F'));
	printf("Z diventa -> %d\n", ft_tolower('Z'));
	printf("a diventa -> %d\n", ft_tolower('a'));
}
*/