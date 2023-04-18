/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:37:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/04/18 14:48:01 by fcorvaro         ###   ########.fr       */
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

char	*ft_itoa(int n);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *dest, int ch, size_t len);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char const *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *str, int c);

char	*ft_strdup(const char *source);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int		ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(const char *str1, const char *str2, size_t	size);

char	*ft_strnstr(const char *src, const char *find, size_t n);

char	*ft_strrchr(const char *str, int c);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int i);

int		ft_toupper(int i);

/*closing ifndef*/
#endif
