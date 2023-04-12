/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:47:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/12 18:33:18 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*void	*ft_memset(void *str, int c, size_t len)*/
/*Erases the data in the "n" bytes of the memory starting*/
/*at the location pointed by "s" writing zeroes.*/
