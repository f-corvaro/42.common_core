/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:04:05 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 10:25:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
 * A function that calculates the length of a string.
 *
 * Parameters:
 * - str: the string whose length is to be calculated.
 *
 * Returns:
 * - The length of 'str'.
 * - 0 if 'str' is NULL.
 *
 * The function first checks if 'str' is NULL. If it is, it returns 0.
 * Then it enters a loop that continues as long as there are characters in
 * 'str'.
 * In each iteration of the loop, it increments a counter 'i'.
 * The counter 'i' will therefore hold the length of 'str' at the end of the
 * function.
 */
size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/*
 * A function that reads the next line from a file descriptor.
 *
 * Parameters:
 * - fd: the file descriptor from which to read.
 *
 * Returns:
 * - A string containing the next line read from 'fd'.
 * - NULL if an error occurs or if 'fd' is invalid.
 *
 * The function first checks if 'fd' is valid and if BUFFER_SIZE is greater
 * than 0. If not, it returns NULL.
 * Then it calls 'ft_line_allocation' to read from 'fd' until a newline character
 * is found or until the end of the file is reached.
 * If an error occurs during this process, it returns NULL.
 * Then it calls 'ft_next_line' to extract the next line from the read characters
 * and 'ft_rem_line' to remove this line from the read characters.
 * Finally, it returns the extracted line.
 */
char	*get_next_line(int fd)
{
	char		*out;
	static char	*str[4096];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str[fd] = ft_line_allocation(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	out = ft_next_line(str[fd]);
	str[fd] = ft_rem_line(str[fd]);
	return (out);
}

/*int	main(void)
{
	char	*s;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("file.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);
	fd3 = open("file3.txt", O_RDONLY);
	i = 1;
	while (i < 15)
	{
		s = get_next_line(fd1);
		printf("line [%02d]: %s", i, s);
		free(s);
		s = get_next_line(fd2);
		printf("line [%02d]: %s", i, s);
		free(s);
		s = get_next_line(fd3);
		printf("line [%02d]: %s", i, s);
		free(s);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/