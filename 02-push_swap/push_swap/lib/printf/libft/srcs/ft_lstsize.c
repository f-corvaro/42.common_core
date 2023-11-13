/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:58:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that counts the number of elements in a linked list.
 *
 * Parameters:
 * - lst: a pointer to the first element of the linked list.
 *
 * Returns:
 * - The number of elements in the linked list.
 *
 * The function first assigns 'lst' to 'head'.
 * Then it initializes 'i' to 0.
 * Then it enters a loop that continues as long as 'head' is not NULL.
 * In each iteration of the loop, it increments 'i' and moves 'head'
 * to the next element in the linked list.
 * Finally, it returns 'i'.
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
