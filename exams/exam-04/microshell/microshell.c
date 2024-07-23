# include <string.h>
# include <unistd.h>
# include <sys/wait.h>

int	print_error(char *s)
{
	while (*s)
		write(2, s++, 1);
	return (1);
}

int	cd(char **av, int ac)
{
	if (ac != 2)
		return (print_error("error: cd: bad arguments\n"));
	if (chdir(av[1]) == -1)
		return (print_error("error: cd: cannot change directory to "), print_error(av[1]), print_error("\n"));
	return (0);
}

int exec(char **av, int ac, char **envp)
{
	int	fd[2];
	int	status;
	int	has_pipe = av[ac] && !strcmp(av[ac], "|");

	if (!has_pipe && !strcmp(*av, "cd"))
		return (cd(av, ac));
	if (has_pipe && pipe(fd) == -1)
		return (print_error("error: fatal\n"));

	int	pid = fork();
	if (!pid)
	{
		av[ac] = 0;
		if (has_pipe && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
			return (print_error("error: fatal\n"));
		if (!strcmp(*av, "cd"))
			return (cd(av, ac));
		execve(*av, av, envp);
		return (print_error("error: cannot execute "), print_error(*av), print_error("\n"));
	}

    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
        return (print_error("error: fatal\n"));
    return (WIFEXITED(status) && WEXITSTATUS(status));
}

int main(int ac, char **av, char **envp)
{
    int	i = 0;
    int	status = 0;

	if (ac > 1)
	{
		while (av[i] && av[++i])
		{
			av += i;
			i = 0;
			while (av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
				i++;
			if (i)
				status = exec(av, i, envp);
		}
	}
	return (status);
}
