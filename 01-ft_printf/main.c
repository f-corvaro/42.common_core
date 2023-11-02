/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:08:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/31 09:19:29 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("real: %d\n", printf(" %p %p ", 0, 0));
	ft_printf("fake: %d\n", ft_printf(" %p %p ", 0, 0));
	return (0);
}
