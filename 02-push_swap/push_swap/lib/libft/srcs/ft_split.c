/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:51:14 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that counts the number of words in a string 'str'
 * separated by a character 'c'.
 *
 * Parameters:
 * - str: the string to count words in.
 * - c: the character that separates words.
 *
 * Returns:
 * - The number of words in 'str'.
 *
 * The function initializes a counter 'counter' to 0 and a flag 'warn' to 0.
 * Then it enters a loop that continues as long as there are characters in
 * 'str'.
 * In each iteration of the loop, it checks if the current character in 'str'
 * is not equal to 'c' and 'warn' is 0.
 * If it is, it sets 'warn' to 1 and increments 'counter'.
 * If the current character in 'str' is equal to 'c', it sets 'warn' to 0.
 * Finally, it returns 'counter'.
 */
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

/*
 * A function that creates a new string from a substring of 'str' starting at
 * index 'start' and ending at index 'end'.
 *
 * Parameters:
 * - str: the original string.
 * - start: the starting index of the substring.
 * - end: the ending index of the substring.
 *
 * Returns:
 * - A pointer to the newly created string.
 * - NULL if memory allocation fails.
 *
 * The function first allocates memory for a new string of length
 * 'end' - 'start' + 1.
 * Then it enters a loop that continues as long as 'start' is less than
 * 'end'.
 * In each iteration of the loop, it copies the character at index
 * 'start' from 'str' to the new string and increments 'start'.
 * Finally, it null-terminates the new string and returns it.
 */
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

/*
 * A function that calculates the length of a string 'str'.
 *
 * Parameters:
 * - str: the string whose length is to be calculated.
 *
 * Returns:
 * - The length of 'str'.
 *
 * The function initializes a counter 'i' to 0.
 * Then it enters a loop that continues as long as there are characters in
 * 'str'.
 * In each iteration of the loop, it increments 'i'.
 * When the loop ends, 'i' is the length of 'str', so the function returns
 * 'i'.
 */
static int	function_3(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
 * A function that splits a string 's' into an array of words separated by
 * a character 'c'.
 *
 * Parameters:
 * - s: the string to split.
 * - c: the character that separates words.
 *
 * Returns:
 * - A pointer to the newly created array of words.
 * - NULL if 's' is NULL or if memory allocation fails.
 *
 * The function first checks if 's' is NULL. If it is, it returns NULL.
 * Then it allocates memory for an array of 'function_1(s, c) + 1' pointers.
 * If memory allocation fails, it returns NULL.
 * Then it enters a loop that continues as long as 'i' is less than or equal
 * to the length of 's'.
 * In each iteration of the loop, it checks if the current character in 's' is
 * not equal to 'c' and 'start' is less than 0.
 * If it is, it sets 'start' to 'i'.
 * If 'start' is greater than or equal to 0 and the current character in 's'
 * is equal to 'c' or 'i' is equal to the length of 's',
 * it creates a new string from the substring of 's' starting at 'start' and
 * ending at 'i', and stores the pointer to the new string in 'out[j]'.
 * Then it sets 'start' to -1 and increments 'j'.
 * Finally, it sets the last element of 'out' to 0 and returns 'out'.
 */
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
