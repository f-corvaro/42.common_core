/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:37:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 11:19:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ------------  HEADER GUARD  ---------------------------------------------- */
#ifndef LIBFT_H
# define LIBFT_H

/* ------------  BUFFER SIZE DEFINITION  ------------------------------------ */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

/* ------------  STANDARD I/O LIBRARY  -------------------------------------- */
# include <stdio.h>

/* ------------  STANDARD LIBRARY  ------------------------------------------ */
# include <stdlib.h>

/* ------------  UNIX STANDARD LIBRARY  ------------------------------------- */
# include <unistd.h>

/* ------------  STANDARD DEFINES LIBRARY  ---------------------------------- */
# include <stddef.h>

/* ------------  TYPES LIBRARY  --------------------------------------------- */
# include <sys/types.h>

/* ------------  FILE CONTROL LIBRARY  -------------------------------------- */
# include <fcntl.h>

/* ------------  STRUCTURE DEFINITION  -------------------------------------- */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* ------------  STRING CONVERSION FUNCTIONS  ------------------------------- */

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

/* ------------  MEMORY FUNCTIONS  ------------------------------------------ */

void	ft_bzero(void *dest, size_t len);
void	*ft_calloc(size_t n, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int ch, size_t len);

/* ------------  CHARACTER CHECK FUNCTIONS  --------------------------------- */

int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);

/* ------------  OUTPUT FUNCTIONS  ------------------------------------------ */

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);

/* ------------  STRING MANIPULATION FUNCTIONS  ----------------------------- */

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

/* ------------  CASE CONVERSION FUNCTIONS  --------------------------------- */

int		ft_tolower(int i);
int		ft_toupper(int i);

/* ------------  LINKED LIST ADDITION FUNCTIONS  ---------------------------- */

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

/* ------------  LINKED LIST DELETION FUNCTIONS  ---------------------------- */

void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* ------------  LINKED LIST ITERATION FUNCTION  ---------------------------- */

void	ft_lstiter(t_list *lst, void (*f)(void *));

/* ------------  LINKED LIST RETRIEVAL FUNCTIONS  --------------------------- */

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);

/* ------------  LINKED LIST TRANSFORMATION FUNCTION  ----------------------- */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ------------  LINKED LIST SIZE FUNCTION  --------------------------------- */

int		ft_lstsize(t_list *lst);

/* ------------  STRING LENGTH FUNCTION  ------------------------------------ */

size_t	ft_len(char *str);

/* ------------  STRING SEARCH FUNCTION  ------------------------------------ */

char	*ft_schr_gnl(char *str, int c);

/* ------------  STRING JOIN FUNCTION  -------------------------------------- */

char	*ft_sjoin_gnl(char *str1, char *str2);

/* ------------  LINE ALLOCATION FUNCTION  ---------------------------------- */

char	*ft_line_allocation(int fd, char *str);

/* ------------  NEXT LINE FUNCTION  ---------------------------------------- */

char	*ft_next_line(char *str);

/* ------------  REMOVE LINE FUNCTION  -------------------------------------- */

char	*ft_rem_line(char *line);

/* ------------  GET NEXT LINE FUNCTION  ------------------------------------ */

char	*get_next_line(int fd);

#endif
