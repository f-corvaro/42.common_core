```plaintext
Assignment name  : microshell
Expected files   : microshell.c
Allowed functions: malloc, free, write, close, fork, waitpid, signal, kill, exit, chdir, execve, dup, dup2, pipe, strcmp, strncmp
--------------------------------------------------------------------------------

Write a program that will behave like executing a shell command.

Details:

- The command line to execute will be the arguments of this program.
- Executable's path will be absolute or relative but your program must not build a path (from the PATH variable for example).
- You must implement "|" and ";" like in bash.
  - We will never try a "|" immediately followed or preceded by nothing or "|" or ";".

BUILT-IN COMMAND:

- Your program must implement the built-in command cd only with a path as argument (no '-' or without parameters).
  - If cd has the wrong number of arguments, your program should print in STDERR "error: cd: bad arguments" followed by a '\n'.
  - If cd failed, your program should print in STDERR "error: cd: cannot change directory to path_to_change" followed by a '\n' with path_to_change replaced by the argument to cd.
  - A cd command will never be immediately followed or preceded by a "|".

ADDITIONAL REQUIREMENTS:

- You don't need to manage any type of wildcards (*, ~ etc...).
- You don't need to manage environment variables ($BLA ...).
- If a system call, except execve and chdir, returns an error, your program should immediately print "error: fatal" in STDERR followed by a '\n' and the program should exit.
- If execve failed, you should print "error: cannot execute executable_that_failed" in STDERR followed by a '\n' with executable_that_failed replaced with the path of the failed executable (It should be the first argument of execve).
- Your program should be able to manage more than hundreds of "|" even if we limit the number of "open files" to less than 30.

Example:

For example, this should work:
$>./microshell /bin/ls "|" /usr/bin/grep microshell ";" /bin/echo i love my microshell
microshell
i love my microshell
$>

Hints:
- Don't forget to pass the environment variable to execve.
- Do not leak file descriptors!
```
