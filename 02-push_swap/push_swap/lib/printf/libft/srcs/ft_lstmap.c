/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:00 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 11:01:07 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that applies the function 'f' to the content of each element
 * of a linked list to create a new list.
 *
 * Parameters:
 * - lst: a pointer to the first element of the linked list.
 * - f: a pointer to the function to apply to the content of each element.
 * - del: a pointer to the function to use to delete the content if a new
 * element cannot be created.
 *
 * Returns:
 * - A pointer to the first element of the new list, if all elements are
 * created successfully.
 * - NULL, if 'f' or 'lst' is NULL, or if a new element cannot be created.
 *
 * The function first checks if 'f' or 'lst' is NULL. If either is, it
 * returns NULL.
 * Then it initializes 'new' to NULL.
 * Then it enters a loop that continues as long as 'lst' is not NULL.
 * In each iteration of the loop, it creates a new element with the content
 * 'f(lst->content)'.
 * If a new element cannot be created, it deletes all previously created
 * elements using 'del' and returns NULL.
 * If a new element is created successfully, it adds it to the end of the
 * new list and moves 'lst' to the next element in the original list.
 * Finally, it returns a pointer to the first element of the new list.
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
