/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:24 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 12:08:23 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
void	print_list(t_list *node)
{
	while (node)
	{
		printf("node-> %s\n", node->content);
		node = node->next;
	}
}

int	main (void)
{
	t_list	*d;

	d = ft_lstnew("daje roma daje");
	d->next = ft_lstnew("777");
	d->next->next = ft_lstnew("er capitano");
	d->next->next->next = ft_lstnew("bella pe te");
	print_list(d);
}*/