/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:05:21 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:23:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @param str The string to be scanned.
 * @param c The character to be located.
 *
 * This function locates the first occurrence of the character 'c' (converted
 * to a char) in the string 'str'.
 * The terminating null character is considered part of the string; therefore
 if 'c' is `\0`,
 * the functions locate the terminating `\0`.
 * If 'c' occurs nowhere in 'str', NULL is returned; otherwise a pointer to
 * the first occurrence of 'c' is returned.
 * If 'str' is NULL, the function returns NULL.
 *
 * @return char* Returns a pointer to the first occurrence of the character,
 * or NULL if the character is not found or 'str' is NULL.
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

/**
 * @brief Concatenates two strings.
 *
 * @param str1 The first string.
 * @param str2 The second string.
 *
 * This function concatenates 'str1' and 'str2' into a new string 'out'.
 * If 'str1' is NULL, it is initialized as an empty string.
 * If 'str2' is NULL, the function returns NULL.
 * The function allocates (with malloc(3)) and returns a new string,
 * which is the concatenation of 'str1' and 'str2'.
 * If the allocation fails, the function returns NULL.
 * After concatenation, 'str1' is freed.
 *
 * @return char* Returns the new string, or NULL if the allocation
 * fails or 'str2' is NULL.
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

/**
 * @brief Allocates and fills a line from a file descriptor.
 *
 * @param fd The file descriptor to read from.
 * @param str The string to be filled with the line.
 *
 * This function allocates and fills a line from a file descriptor 'fd' into
 * the string 'str'.
 * The function reads from 'fd' into a buffer of size 'BUFFER_SIZE + 1', then
 * appends the buffer to 'str'.
 * The function continues reading and appending until a newline character is
 * found in 'str' or 'fd' has no more data.
 * If 'BUFFER_SIZE' is less than or equal to 0, or 'fd' is less than 0, the
 * function returns NULL.
 * If the allocation fails, the function returns NULL.
 * If an error occurs while reading from 'fd', the function frees the buffer
 * and returns NULL.
 *
 * @return char* Returns the filled string, or NULL if an error occurred or
 * EOF has been reached.
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

/**
 * @brief Extracts the next line from a string.
 *
 * @param str The string to extract the line from.
 *
 * This function extracts the next line from the string 'str'.
 * A line is defined as a sequence of characters terminated by '\n'
 * (newline) or '\0' (null character).
 * The function allocates (with malloc(3)) and returns a new string,
 * which is the extracted line.
 * If the allocation fails, the function returns NULL.
 * If 'str' is NULL or an empty string, the function returns NULL.
 *
 * @return char* Returns the extracted line, or NULL if the allocation
 * fails or 'str' is NULL or an empty string.
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

/**
 * @brief Removes a line from a string.
 *
 * @param line The string to remove the line from.
 *
 * This function removes the next line from the string 'line'.
 * A line is defined as a sequence of characters terminated by '\n'
 * (newline) or '\0' (null character).
 * The function allocates (with malloc(3)) and returns a new string,
 * which is 'line' without the removed line.
 * If the allocation fails, the function returns NULL.
 * If 'line' is NULL or an empty string, or does not contain a newline
 * character, the function frees 'line' and returns NULL.
 *
 * @return char* Returns the new string without the removed line, or NULL
 * if the allocation fails or 'line' is NULL or an empty string, or does
 * not contain a newline character.
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
