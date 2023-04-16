/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:37:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/16 18:45:21 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
/*if isn't define, define LIBFT_H*/
# define LIBFT_H
/*including the libraries*/
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/*defining the node of my list*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*calling the functions with the same definition of them*/
int		ft_atoi(const char *str);

void	ft_bzero(void *dest, size_t len);

void	*ft_calloc(size_t n, size_t size);

int		ft_isalnum(int arg);

int		ft_isalpha(int arg);

int		ft_isascii(int arg);

int		ft_isdigit(int arg);

int		ft_isprint(int arg);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *dest, int ch, size_t len);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_strlen(const char *str);

int		ft_strncmp(const char *s1, char *s2, size_t	n);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strrchr(const char *str, int c);

int		ft_tolower(int i);

int		ft_toupper(int i);

/*closing ifndef*/
#endif
