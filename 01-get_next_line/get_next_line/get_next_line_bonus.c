/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:04:05 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/09/23 17:28:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*This function returns the lenght of the str. Used to discover the lenght of
the line to read*/

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

/* This function reads a line of text from a file descriptor and returns a new
string containing the line of text.*/

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