/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:54:45 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/09/23 17:28:49 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*str;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str = ft_line_allocation(fd, str);
	if (!str)
		return (NULL);
	out = ft_next_line(str);
	str = ft_rem_line(str);
	return (out);
}

/*int	main(void)
{
	char		*s;
	int		i;
	int		fd;

	fd = open("file.txt", O_RDONLY);
	i = 1;
	while (i < 15)
	{
		s = get_next_line(fd);
		printf("line [%02d]: %s", i, s);
		free(s);
		i++;
	}
	close(fd);
	return (0);
}*/