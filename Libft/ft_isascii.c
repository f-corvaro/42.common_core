/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:59:06 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/03/30 15:29:25 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int p)
{
	if (p >= 0 && p <= 127)
		return (1);
	return (0);
}

/*if p is an ascii return 1, or return 0 if it doesn't*/