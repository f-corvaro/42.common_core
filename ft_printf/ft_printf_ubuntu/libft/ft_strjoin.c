/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:11:07 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 16:14:26 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*restr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	i = (size_t)ft_strlen(s1);
	j = (size_t)ft_strlen(s2);
	restr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!restr)
		return (NULL);
	i = -1;
	while (s1[++i])
		restr[i] = s1[i];
	j = 0;
	while (s2[j])
		restr[i++] = s2[j++];
	restr[i] = '\0';
	return (restr);
}

/*the function return the concatenation of s1 and s2. s1 is prefix and s2
suffix.

the code below is used to test the function

int	main(void)
{
	char const		*d = "daje-roma-daje";
	char const		*f = "-ciao";

	printf("%s\n", ft_strjoin(d, f));
}
*/