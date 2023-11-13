/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:06:36 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 11:00:38 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that returns the last element of a linked list.
 *
 * Parameters:
 * - lst: a pointer to the first element of the linked list.
 *
 * Returns:
 * - A pointer to the last element of the linked list, if 'lst' is not NULL.
 * - NULL, if 'lst' is NULL.
 *
 * The function first checks if 'lst' is NULL. If it is, it returns NULL.
 * Then it enters a loop that continues as long as the 'next' field of
 * 'lst' is not NULL.
 * In each iteration of the loop, it moves 'lst' to the next element
 * in the linked list.
 * Finally, it returns 'lst', which now points to the last element of
 * the linked list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
