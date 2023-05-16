#include <unistd.h>

int	check(char *s, int i, int p)
{
	int	k;

	k = 0;
	while (k < p)
	{
		if (s[k] == i)
			return (0);
		k++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i])
		{
			if (check(av[1], av[1][i], i))
				write (1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (check(av[1], av[2][j], i) && check(av[2], av[2][j], j))
				write (1, &av[2][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
}
