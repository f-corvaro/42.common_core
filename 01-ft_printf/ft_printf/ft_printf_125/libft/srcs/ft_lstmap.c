/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:00 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:56:43 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 * of each element. Creates a new list resulting of the successive applications
 * of the function 'f'.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function to be applied to each element of the
 * list.
 * @param del The address of the function used to delete the content of an
 * element if needed.
 *
 * This function iterates the list 'lst' and applies the function 'f'
 * to the content of each element.
 * It creates a new list resulting of the successive applications of the
 * function 'f'.
 * If 'new' allocation fails, the function returns NULL.
 *
 * @return t_list* Returns the new list, NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
