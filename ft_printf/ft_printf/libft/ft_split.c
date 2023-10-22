/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 15:29:30 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	function_1(const char *str, char c)
{
	int	counter;
	int	warn;

	counter = 0;
	warn = 0;
	while (*str)
	{
		if (*str != c && warn == 0)
		{
			warn = 1;
			counter++;
		}
		else if (*str == c)
			warn = 0;
		str++;
	}
	return (counter);
}
/*function_1 is used as counter for word.*/

static char	*function_2(const char *str, int start, int end)
{
	char	*rtn;
	int		i;

	rtn = (char *)malloc(sizeof(char) * ((end - start) + 1));
	i = 0;
	while (start < end)
		rtn[i++] = str[start++];
	rtn[i] = 0;
	return (rtn);
}
/*function_2 is used as method to copy the words*/

static int	function_3(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*function 3 is used as strlen, but with static_int*/

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	out = (char **)malloc(sizeof(char *) * (function_1(s, c) + 1));
	if (!out)
		return (NULL);
	start = -1;
	i = -1;
	j = 0;
	while (++i <= function_3(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == function_3(s)))
		{
			out[j++] = function_2(s, start, i);
			start = -1;
		}
	}
	out[j] = 0;
	return (out);
}

/*s is the str to be split. c is the delimiter char.
The function return the array of new strs resulting from the split. NULL
if the allocation fails.

the code below is used to test the function

int	main(void)
{
	char str[] = "dajedajedaje";
	char **str1;
	s1 = ft_split(str,'d');
	while(*str1)
	{
		printf("%s\n",*str1++);
	}
}
*/
