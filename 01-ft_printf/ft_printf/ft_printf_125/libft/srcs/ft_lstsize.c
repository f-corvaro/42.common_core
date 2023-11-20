/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 13:58:41 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Counts the number of elements in a list.
 *
 * @param lst The address of a pointer to the first link of a list.
 *
 * This function traverses the list 'lst' and counts the number of elements.
 *
 * @return int Returns the number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		i;

	head = lst;
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
