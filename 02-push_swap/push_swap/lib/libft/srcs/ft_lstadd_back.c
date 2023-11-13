/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:58:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:16:51 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that adds a new element at the end of a linked list.
 *
 * Parameters:
 * - lst: a double pointer to the first link of a list.
 * - new: a pointer to the element to be added to the list.
 *
 * This function does not return a value.
 *
 * The function first checks if the list is not empty. If it's not, it
 * traverses the list to find the last element and sets its 'next' field
 * to point to the 'new' element.
 * If the list is empty (i.e., *lst is NULL), it sets 'lst' to point to the
 * 'new' element.
 * In both cases, the 'new' element is effectively added at the end of the
 * list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst)
	{
		node = *lst;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*lst = new;
}
