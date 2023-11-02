/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:47:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 17:20:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, 0, len);
}

/*void	*ft_memset(void *dest, int ch, size_t len)
This function does the same thing of the memset, but ch is 0 now.*/