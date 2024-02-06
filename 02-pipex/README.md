# **PIPEX**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-pipex"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/02-pipex/.extra/pipex.png" width="300">

<p align="justify">

[![subject](https://img.shields.io/badge/subject-pipex-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/02-pipex/.extra/en.subject.pdf)

</p>
<br>

### Index



<br>

## Folder Structure

<p align="justify">

```
```

<br>

## About

<p align="justify">

This project aims to create a program in C that mimics the Unix pipeline mechanism, specifically the `|` (pipe) operator. The pipe operator in Unix/Linux is used to chain multiple commands together, where the output of one command serves as input to the next.

In the context of this project, you'll be expected to create a program that can take two commands as input, execute the first command, capture its output, and then provide that output as input to the second command.

<p>
<br>

**Some rules to keep in mind:**

<p align="justify">

• Your project must be written in C (in accordance with the Norm).

• Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors.

• All heap allocated memory space must be properly freed when necessary.

• You must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink. And the Makefile must at least contain the rules ```$(NAME), all, clean, fclean and re (bonus if you want maximum score)```.

• If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.

•Global variables are forbidden.

<p>
<br>

### Mandatory part

**Program name:**

<p align="justify">

```pipex``` Which has as arguments 4 elements:

```file1 cmd1 cmd2 file2```

• file1 and file2 -> file names.

• cmd1 and cmd2 -> shell commands with their parameters.

</p>
<br>

**Files to turn in:**

<p align="justify">

```Makefile, *.h, *.c```

</p>
<br>

**External functs. allowed:**

<p align="justify">

Libft authorized, and:

```
1. open, close, read, write,
malloc, free, perror,
strerror, access, dup, dup2,
execve, exit, fork, pipe,
unlink, wait, waitpid

1. ft_printf and any equivalent YOU coded
```

</p>
<br>

***Examples:***

```shell
$> < file1 cmd1 | cmd2 > file2
```

```shell
$> ./pipex infile "ls -l" "wc -l" outfile
```

Should behave like: ```< infile ls -l | wc -l > outfile```

```shell
$> ./pipex infile "grep a1" "wc -w" outfile
```

Should behave like: ```< infile grep a1 | wc -w > outfile```

<p>
<br>

## The rules

<p align="justify">

The program should handle the errors like the shell command.

<br>

## Bonus Part

<p align="justify">

The bonus part requires to handle multiple pipes, as this example:

```shell
$> ./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2
```

Should behave like: ```< file1 cmd1 | cmd2 | cmd3 ... | cmdn > file2```


Furthermore, the program needs to support ```«``` and ```»``` when the first parameter is ```"here_doc"```. An example is:

```shell
$> ./pipex here_doc LIMITER cmd cmd1 file
```

Should behave like: ```cmd << LIMITER | cmd1 >> file```
<p>

## High-level "code" explaination:

<p align="justify">

The pipex program should look like:

1. Parse the input to identify the two commands.
2. Execute the first command using a system call (like `fork()` and `exec()`).
3. Capture the output of the first command. This will likely involve redirecting the standard output (stdout) of the first command to a pipe.
4. Provide the captured output as input to the second command. This will likely involve redirecting the standard input (stdin) of the second command to read from the pipe.
5. Execute the second command.
6. Capture the output of the second command and display it to the user.

<p>

## What do I need to know?

<p align="justify">

## Evaluation



### Correction sheet

</p>
<br>

## Support Me

<p align="justify">
Remember to ⭐ the repository.
If you want to support me:</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Skills developed

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim,vscode" />
  </a>
</p><br>

## Sources

<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
