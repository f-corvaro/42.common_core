/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:04:05 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 14:19:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Calculates the length of a string.
 *
 * @param str The string whose length is to be calculated.
 *
 * This function calculates the length of the string 'str'.
 * If 'str' is NULL, the function returns 0.
 *
 * @return size_t Returns the length of the string.
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

/**
 * @brief Reads a line from a file descriptor.
 *
 * @param fd The file descriptor to read from.
 *
 * This function reads a line from a file descriptor, where a line is
 * defined as a string of characters
 * terminated by '\n' (newline) or EOF (End Of File).
 * The function uses a static variable to keep track of multiple file
 * descriptors.
 * If 'BUFFER_SIZE' is less than or equal to 0, or 'fd' is less than 0,
 * the function returns NULL.
 * If the allocation fails, the function returns NULL.
 *
 * @return char* Returns the line that has been read, or NULL if an error
 * occurred or EOF has been reached.
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