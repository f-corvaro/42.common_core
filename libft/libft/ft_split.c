/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/17 16:56:37 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strlen_1(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	counter_word(const char *str, char c)
{
	int	count;
	int	f0;

	count = 0;
	f0 = 0;
	while (*str)
	{
		if (*str != c && f0 == 0)
		{
			f0 = 1;
			count++;
		}
		else if (*str == c)
			f0 = 0;
		str++;
	}
	return (count);
}

static char	*copy_words(const char *str, int start, int end)
{
	char	*out;
	int		i;

	i = 0;
	out = (char *)malloc(sizeof(char) * ((end - start) + 1));
	while (start < end)
		out[i++] = str[start++];
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		j;

	split = (char **)malloc(sizeof(char *) * (counter_word(s, c) + 1));
	if (!s || !split)
		return (0);
	start = -1;
	i = 0;
	j = 0;
	while (i <= strlen_1(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == strlen_1(s)) && start >= 0)
		{
			split[j++] = copy_words(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*s is the str to be split. c is the delimiter char.
The function return the array of new strs resulting from the split. NULL
if the allocation fails.
*/
