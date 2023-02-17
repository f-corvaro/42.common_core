/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:17:20 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/02/17 21:22:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}

/*it return 1 if is printable character or 0 if it doesn't*/