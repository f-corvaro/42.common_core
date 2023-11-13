/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:04:17 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:11:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that adds a new element at the beginning of a linked list.
 *
 * Parameters:
 * - lst: a double pointer to the first link of a list.
 * - new: a pointer to the element to be added to the list.
 *
 * This function does not return a value.
 *
 * The function first checks if 'lst' or 'new' is NULL. If either is NULL,
 * the function returns without doing anything.
 * Then it sets the 'next' field of the 'new' element to point to the first
 * element of the list.
 * Finally, it updates 'lst' to point to the 'new' element, effectively adding
 * the'new' element at the beginning of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
