/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:28:54 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 18:50:04 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

/*
toupper function converts a lowercase alphabet to an uppercase alphabet.

the code below is used to test the function

#include <stdio.h>

int	main(void)
{
	printf("d diventa -> %d\n", ft_toupper('d'));
	printf("f diventa -> %d\n", ft_toupper('f'));
	printf("z diventa -> %d\n", ft_toupper('z'));
	printf("A diventa -> %d\n", ft_toupper('A'));
}
*/