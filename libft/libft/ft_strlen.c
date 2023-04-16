/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:45:00 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 16:07:12 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*The ft_strlen() function calculates the length of a given string
char* is a mutable pointer to a mutable character/string.
const char* is a mutable pointer to an immutable character/string.
You cannot change the contents of the location(s) this pointer
points to.Also, compilers are required to give error messages
when you try to do so. For the same reason, conversion from
const char * to char* is deprecated.

the code below is used to test the function

#include <stdio.h>
int	main (void)
{
	printf("1.lenght is -> %d\n", ft_strlen("daje"));
	printf("2.lenght is -> %d\n", ft_strlen("roma."));
	printf("3.lenght is -> %d\n", ft_strlen("sambucone"));
}
*/
