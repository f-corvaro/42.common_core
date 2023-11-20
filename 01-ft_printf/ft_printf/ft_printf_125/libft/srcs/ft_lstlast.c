/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:06:36 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:55:33 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Returns the last element of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 *
 * This function traverses the list to find the last node and returns it.
 * If the list is empty, it returns NULL.
 *
 * @return t_list* Returns the last element of the list, NULL if the list is
 * empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
