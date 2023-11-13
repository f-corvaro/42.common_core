/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:06:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 11:00:19 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that applies the function 'f' to the content of each element
 * of a linked list.
 *
 * Parameters:
 * - lst: a pointer to the first element of the linked list.
 * - f: a pointer to the function to apply to the content of each element.
 *
 * The function first assigns 'lst' to 'node'.
 * Then it enters a loop that continues as long as 'node' is not NULL.
 * In each iteration of the loop, it calls 'f' with 'node->content' as the
 * argument, and moves 'node' to the next element in the linked list.
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
