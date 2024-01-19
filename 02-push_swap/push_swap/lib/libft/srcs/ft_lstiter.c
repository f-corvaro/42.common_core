/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:06:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:49:46 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content of
 * each element.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function to be applied to each element of the
 * list.
 *
 * This function traverses the list and applies the function 'f' to the content
 * of each node.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	node = lst;
	while (node)
	{
		f(node->content);
		node = node->next;
	}
}
