/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:58:47 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that creates a new element of a linked list.
 *
 * Parameters:
 * - content: a pointer to the content of the new element.
 *
 * Returns:
 * - A pointer to the new element, if memory allocation is successful.
 * - NULL, if memory allocation fails.
 *
 * The function first allocates memory for a new element of type 't_list'.
 * Then it checks if the memory allocation was successful. If it was, it
 * sets the 'content' field of the new element to 'content' and the 'next'
 * field to NULL.
 * Finally, it returns a pointer to the new element.
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
