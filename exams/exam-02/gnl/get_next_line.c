#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int	i;
	int	rd;
	char	c;
	char	*buffer = malloc(100000);

	i = 0;
	rd = 0;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	while ((rd = read(fd, &c, BUFFER_SIZE - BUFFER_SIZE + 1)) > 0)
	{
		buffer[i++] = c;
		if (c == '\n')
			break;
	}
	buffer[i] = '\0';
	if (rd == -1 || i == 0 || (!buffer[i - 1] && !rd))
		return (free(buffer), NULL);
	return(buffer);
}
