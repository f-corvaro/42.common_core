/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:53 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 16:40:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	j = ft_strlen((char *)s1);
	while ((j > i) && check_set(s1[j - 1], set))
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!new)
		return (NULL);
	while (i < j)
		new[k++] = s1[i++];
	new[k] = 0;
	return ((char *)new);
}

/*The function trim s1 from set.

the code below is used to test the function

int	main(void)
{
	char const		*d = "daje-roma-daje";
	char const		*f = "da";

	printf("%s\n", ft_strtrim(d, f));
}
*/