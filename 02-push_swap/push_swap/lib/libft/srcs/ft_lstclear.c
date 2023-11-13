/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:05:17 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:18:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that deletes and frees the given element and every successor
 of that element, using the function 'del' and free(3).
 * Finally, the pointer to the list is set to NULL.
 *
 * Parameters:
 * - lst: a double pointer to the first link of a list.
 * - del: a pointer to a function that deletes the content of a list element.
 *
 * This function does not return a value.
 *
 * The function first checks if 'lst' or 'del' is NULL. If either is NULL, the
 * function returns without doing anything.
 * Then it enters a loop that continues as long as there are elements in the
 * list.
 * In each iteration of the loop, it saves the pointer to the next element,
 * deletes the current element using 'del' and 'ft_lstdelone', and moves on to
 * the next element.
 * After the loop, 'lst' is set to NULL, indicating that the list has been
 * cleared.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = temp;
	}
}
