/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:05:21 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:23:53 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that finds the first occurrence of a character in a string.
 *
 * Parameters:
 * - str: the string in which to search for the character.
 * - c: the character to search for.
 *
 * Returns:
 * - A pointer to the first occurrence of 'c' in 'str'.
 * - NULL if 'c' is not found in 'str' or if 'str' is NULL.
 *
 * The function first checks if 'str' is NULL. If it is, it returns NULL.
 * Then it enters a loop that continues as long as there are characters in
 * 'str'.
 * In each iteration of the loop, it checks if the current character is equal
 * to 'c'.
 * If it is, it returns a pointer to the current character.
 * If 'c' is not found in 'str', the function returns NULL.
 */
char	*ft_schr_gnl(char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_len(str)]);
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

/*
 * A function that joins two strings together and returns a new string
 containing the combined strings.
 *
 * Parameters:
 * - str1: the first string.
 * - str2: the second string.
 *
 * Returns:
 * - A pointer to the newly created string that contains the combined strings.
 * - NULL if memory allocation fails or if 'str2' is NULL.
 *
 * The function first checks if 'str1' is NULL. If it is, it allocates memory
 * for a new string of size 1 and sets the first character to '\0'.
 * Then it checks if 'str2' is NULL. If it is, it returns NULL.
 * The rest of the function implementation is not shown in the provided code.
 */
char	*ft_sjoin_gnl(char *str1, char *str2)
{
	size_t		i;
	size_t		j;
	char		*out;

	if (!str1)
	{
		str1 = (char *)malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	if (!str2)
		return (NULL);
	out = (char *)malloc(sizeof(char) * (ft_len(str1) + ft_len(str2) + 1));
	if (out == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
		out[j++] = str1[i++];
	i = 0;
	while (str2[i])
		out[j++] = str2[i++];
	out[j] = '\0';
	free(str1);
	return (out);
}

/*
 * A function that reads from a file descriptor until a newline character is
 found or until the end of the file is reached.
 * The read characters are appended to the string 'str'.
 *
 * Parameters:
 * - fd: the file descriptor from which to read.
 * - str: the string to which the read characters are appended.
 *
 * Returns:
 * - The updated string 'str'.
 * - NULL if an error occurs during reading or memory allocation.
 *
 * The function first allocates a buffer of size BUFFER_SIZE + 1.
 * Then it enters a loop that continues as long as there is no newline
 * character in 'str' and the end of the file has not been reached.
 * In each iteration of the loop, it reads from 'fd' into the buffer and
 * appends the read characters to 'str'.
 * If an error occurs during reading, it frees the buffer and returns NULL.
 * After the loop, it frees the buffer and returns 'str'.
 */
char	*ft_line_allocation(int fd, char *str)
{
	char	*buff;
	ssize_t	dim;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	dim = 1;
	while (!(ft_schr_gnl(str, '\n')) && dim > 0)
	{
		dim = read(fd, buff, BUFFER_SIZE);
		if (dim == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[dim] = '\0';
		str = ft_sjoin_gnl(str, buff);
	}
	free(buff);
	return (str);
}

/*
 * A function that extracts the next line from a string.
 *
 * Parameters:
 * - str: the string from which to extract the line.
 *
 * Returns:
 * - A new string containing the extracted line.
 * - NULL if an error occurs during memory allocation.
 *
 * The function first calculates the length of the line to extract (i.e.,
 * the number of characters until the next newline character or the end of
 * 'str').
 * Then it allocates memory for a new string of that size.
 * It copies the characters of the line from 'str' to the new string.
 * If the line ends with a newline character, it is included in the new
 * string.
 * Finally, it null-terminates the new string and returns it.
 */
char	*ft_next_line(char *str)
{
	char	*new;
	int		i;

	i = 0;
	if (str[i] == 0)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	new = (char *)malloc(sizeof(char) * (i + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		new[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		new[i] = '\n';
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
 * A function that removes the next line from a string.
 *
 * Parameters:
 * - line: the string from which to remove the line.
 *
 * Returns:
 * - A new string containing the remaining part of 'line' after the removed
 * line.
 * - NULL if an error occurs during memory allocation.
 *
 * The function first calculates the length of the line to remove (i.e., the
 * number of characters until the next newline character or the end of 'line').
 * Then it allocates memory for a new string of the remaining size.
 * It copies the remaining characters from 'line' to the new string.
 * Finally, it null-terminates the new string, frees 'line', and returns the
 * new string.
 */
char	*ft_rem_line(char *line)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_len(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}
