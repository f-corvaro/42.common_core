/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:10:03 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:05:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Counts the number of words in a string, separated by a specific
 * character.
 *
 * @param str The string to be scanned.
 * @param c The character used as the delimiter to count words.
 *
 * This function scans the string 'str' and counts the number of words,
 * which are sequences of characters separated by the character 'c'.
 * A new word is counted when a character different from 'c' is found after
 * encountering 'c' or at the start of the string.
 *
 * @return int Returns the number of words found in the string.
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

/**
 * @brief Extracts a substring from a string.
 *
 * @param str The string from which to extract the substring.
 * @param start The starting index of the substring in the string.
 * @param end The ending index of the substring in the string.
 *
 * This function creates a new string and copies the characters from 'str'
 * starting at index 'start' and ending at index 'end' into the new string.
 * The new string is then null-terminated.
 *
 * @return char* Returns the newly created substring. If the allocation fails,
 * the function returns NULL.
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

/**
 * @brief Counts the number of characters in a string.
 *
 * @param str The string to be scanned.
 *
 * This function scans the string 'str' and counts the number of characters.
 *
 * @return int Returns the number of characters found in the string.
 */
static int	function_3(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * @brief Splits a string into words by a character delimiter.
 *
 * @param s The string to be split.
 * @param c The character used as the delimiter to split the string.
 *
 * This function splits the string 's' into an array of words,
 * which are sequences of characters separated by the character 'c'.
 * The array is then null-terminated.
 *
 * @return char** Returns the newly created array of words. If the allocation
 * fails, the function returns NULL.
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
