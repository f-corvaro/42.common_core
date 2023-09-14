# EXAM 02 

<a href="https://github.com/f-corvaro/42.common_core/tree/main/exams/exam-02"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/exams/.extra/exam02.png">

### Index
- [Exam details](#exam-details)
  - [Level 1](#level-1)
  - [Level 2](#level-2)
- [Level 1 - inter](#level-1---inter)
  - [Subject](#subject)
  - [Solution](#solution)
- [Level 1 - union](#level-1---union)
  - [Subject](#subject-1)
  - [Solution](#solution-1)
- [Level 2 - ft\_printf](#level-2---ft_printf)
  - [Subject](#subject-2)
  - [Solution](#solution-2)
- [Level 2 - get\_next\_line](#level-2---get_next_line)
  - [Subject](#subject-3)
  - [Solution](#solution-3)
- [Exam skill required:](#exam-skill-required)
- [Support Me](#support-me)
- [License](#license)

<br>
  
## Exam details
<p align="justify">
This exam has 2 random questions picked from the first and second level. Each level give to you 50 points. To pass the exam you need 100 score. For information about exam login and other details, check: 
  
[here](https://github.com/f-corvaro/42.common_core/tree/main/exams)

### Level 1:

```
- inter
- union
```
I suggest to test the code compiling with the following flag: ```gcc -o name name.c``` so you can try the examples of the subject copying and pasting.
  
### Level 2:
```
- Ft_Printf
- Get_Next_Line
```
</p>
<br>
  
## Level 1 - inter

### Subject:
```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "nothing" "This sentence hides nothing" | cat -e
nothig$
$>./inter | cat -e
$
```
  
### Solution:

[inter.c](https://github.com/f-corvaro/42.common_core/blob/main/exams/exam-02/inter/inter.c)
  
<br>
  
## Level 1 - union

### Subject:
```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```
  
### Solution:

[union.c](https://github.com/f-corvaro/42.common_core/blob/main/exams/exam-02/union/union.c)

<br>

## Level 2 - ft_printf

### Subject:
  
(It's an old version of the subject, but the solution is for the newer version).
  
```
Assignment name  : ft_printf
Expected files   : ft_printf.c
Allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end
--------------------------------------------------------------------------------

Write a function named `ft_printf` that will mimic the real printf with the following constraints:

- It will manage only the following conversions: s,d and x
- It will manage the minimum field width. (we will never test with a field with of 0)
- It will manage only the precison flag `.`.

Your function must be declared as follows:

int ft_printf(const char *, ... );

Before you start we advise you to read the `man 3 printf` and the `man va_arg`.
To test your program compare your results with the true printf.

Exemples of the function output:

call: ft_printf("%10.2s\n", "toto");
out:        to$

call: ft_printf("Magic %s is %5d", "number", 42);
out:Magic number is    42%

call: ft_printf("Hexadecimal for %d is %x\n", 42, 42);
out:Hexadecimal for 42 is 2a$
```
  
### Solution:

[ft_printf.c](https://github.com/f-corvaro/42.common_core/blob/main/exams/exam-02/printf/ft_printf.c)
 
<br>

## Level 2 - get_next_line

### Subject:
  
(It's an old version of the subject, but the solution is for the newer version).
  
```
Assignment name  : get_next_line
Expected files   : get_next_line.c get_next_line.h
Allowed functions: read, free, malloc
--------------------------------------------------------------------------------

Write a function will store, in the parameter "line", a line that has been read from the file descriptor 0.

Your function must be prototyped as follows: int get_next_line(char **line);

Your function should be memory leak free.

What we call a "line that has been read" is a succession of 0 to n characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF).

The string stored in the parameter "line" should not contained any '\n'.

The parameter is the address of a pointer to a character that will be used to store the line read.

The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed (meaning read has returned 0), or if an error has happened respectively.

When you've reached the End Of File, you must store the current buffer in "line". If the buffer is empty you must store an empty string in "line".

When you've reached the End Of File, your function should keep 0 memory allocated with malloc except the last buffer that you should have stored in "line".

What you've stored in "line" should be free-able.

Calling your function get_next_line in a loop will therefore allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

Make sure that your function behaves well when it reads from a file, from the standard output, from a redirection etc.

No call to another function will be done on the file descriptor between 2 calls of get_next_line.

Finally we consider that get_next_line has an undefined behavior when reading from a binary file.

You should use the test.sh to help you test your get_next_line.
```
  
### Solution:

[get_next_line.c](https://github.com/f-corvaro/42.common_core/blob/main/exams/exam-02/gnl/get_next_line.c)

[get_next_line.h](https://github.com/f-corvaro/42.common_core/blob/main/exams/exam-02/gnl/get_next_line.h)

<br>
  
## Exam skill required:
<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim" />
  </a>
</p>

<br>
  
## Support Me 

<p align="justify"> 
I hope this guide helped you to understand this project, remember to ⭐ the repository.
If you want to support me:</p>

<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg">   
    
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg">
 
<br>
  
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
  
<br>
