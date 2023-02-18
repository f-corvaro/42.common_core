/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:49:19 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/02/18 21:51:16 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 65 && i <= 90)
		return (i + 32);
	return (i);
}

/*tolower function converts a 
uppercase alphabet to an lowercase alphabet.*/