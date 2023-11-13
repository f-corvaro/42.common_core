/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:05:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:59:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that deletes an element of a linked list and frees the memory
 * of the element's content using the function 'del'.
 *
 * Parameters:
 * - lst: a pointer to the element to delete.
 * - del: a pointer to the function to use to delete the content.
 *
 * The function first checks if 'lst' and 'del' are NULL. If they are, it
 * returns without doing anything.
 * Then it calls 'del' with 'lst->content' as the argument to delete the
 * content.
 * Finally, it frees the memory of 'lst'.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
