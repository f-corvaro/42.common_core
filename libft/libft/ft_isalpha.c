/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:04:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/03/30 15:59:37 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int p)
{
	if ((p >= 65 && p <= 90)
		|| (p >= 97 && p <= 122))
		return (1);
	return (0);
}

/*return 1 if p is lowercase or uppercase or 0 if it doesn't*/