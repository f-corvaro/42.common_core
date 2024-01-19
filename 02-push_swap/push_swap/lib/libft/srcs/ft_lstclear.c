/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:05:17 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:54:39 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Deletes and frees the given element and every successor of that
 * element.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param del The address of the function used to delete the content of
 * the element.
 *
 * This function deletes and frees the given element and every successor of
 * that element, using the function 'del' and free(3). Finally, the pointer
 * to the list is set to NULL.
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
