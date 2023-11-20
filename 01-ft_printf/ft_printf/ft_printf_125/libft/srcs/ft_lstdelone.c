/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:05:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:55:15 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Deletes and frees the given element.
 *
 * @param lst The address of a pointer to the element to be deleted.
 * @param del The address of the function used to delete the content of the
 * element.
 *
 * This function deletes and frees the given element 'lst', using the function
 * 'del' and free(3). The memory of 'next' must not be freed.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
