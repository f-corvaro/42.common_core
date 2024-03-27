#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dest_size > 0)
	{
		while (i < src_size && i < dest_size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

char	*ft_strjoin(char *s1, const char *s2, size_t len)
{
	size_t	len1;
	size_t	len2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = len;
	join = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len1 + 1);
	ft_strlcpy((join + len1), s2, len2 + 1);
	free (s1);
	return (join);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	char		*nline;
	int		to_copy;
	int		count_read;

	line = ft_strdup(buf);
	while (!(ft_strchr(line, '\n')) && (count_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[count_read] = '\0';
		line = ft_strjoin(line, buf, count_read);
	}
	if (ft_strlen(line) == 0)
		return (free(line), NULL);
	nline = ft_strchr(line, '\n');
	if (nline != NULL)
	{
		to_copy = nline - line + 1;
		ft_strlcpy(buf, nline + 1, BUFFER_SIZE + 1);
	}
	else
	{
		to_copy = ft_strlen(line);
		ft_strlcpy(buf, "", BUFFER_SIZE + 1);
	}
	line[to_copy] = '\0';
	return (line);
}
