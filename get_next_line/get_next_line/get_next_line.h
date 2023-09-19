/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:55:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/09/19 11:35:13 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	ft_len(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_line_allocation(int fd, char *str);
char	*ft_next_line(char *str);
char	*ft_rem_line(char *line);
char	*get_next_line(int fd);
#endif

/*
1 -> for printf, BUFFER_SIZE
2 -> for size_t, sizeof()
3 -> for open(), read()
4 -> for malloc(), free()
5 -> for ssize_t
6 -> for O_RDONLY
*/