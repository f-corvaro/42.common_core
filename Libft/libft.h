/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:37:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/03/30 15:57:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t n, size_t size);

int		ft_isalnum(int p);

int		ft_isalpha(int p);

int		ft_isascii(int p);

int		ft_isdigit(int p);

int		ft_isprint(int p);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t len);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_strlen(const char	*str);

int		ft_strncmp(const char *s1, char *s2, size_t	n);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strrchr(const char *str, int c);

int		ft_toupper(int i);

int		ft_toupper(int i);

#endif
