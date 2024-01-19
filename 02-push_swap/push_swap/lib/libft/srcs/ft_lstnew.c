/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:57:26 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Allocates and returns a new element.
 *
 * @param content The content to create the new element with.
 *
 * This function allocates (with malloc(3)) and returns a new element.
 * The variable 'content' is initialized with the value of the parameter
 * 'content'.
 * The variable 'next' is initialized to NULL.
 *
 * @return t_list* Returns the new element, NULL if the allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = 0;
	}
	return (new);
}
