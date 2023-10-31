# **FT_PRINTF**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_intra.png">

<p align="justify">

v9 | v10
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject(new).pdf)

<table><tr><td>This guide is made for the subject v10, there aren't differences between the two subjects</td></tr></table>

**WARNING:** *Before to push, you need to check where moulinette will be executed. There is a difference of length and information printed return of printf, and it depends on macOS or Ubuntu system.*

</p>
<br>

### Index

- [**FT\_PRINTF**](#ft_printf)
		- [Index](#index)
	- [About](#about)
	- [Bonus Part](#bonus-part)
	- [What I need to know?](#what-i-need-to-know)
		- [Makefile](#makefile)
		- [How to handle variable argument list? ](#how-to-handle-variable-argument-list-)
		- [printf](#printf)
	- [Running Tests](#running-tests)
		- [Testing mandatory part](#testing-mandatory-part)
		- [Tester](#tester)
	- [Evaluation](#evaluation)
		- [Correction sheet](#correction-sheet)
		- [Norminette Result](#norminette-result)
		- [Moulinette Result](#moulinette-result)
	- [Treasure hunt](#treasure-hunt)
	- [Support Me](#support-me)
	- [Skills developed](#skills-developed)
	- [Sources](#sources)
	- [License](#license)

<br>

## About

<p align="justify">

This assignment is made with the purpose of write a library that contains ft_printf(), a function that will mimic the original printf() from libc. I will use the libft library with the purpose of recreate my own library for the next projects. An in-depth study is about the variadic functions.

<p>
<br>

**Some rules to keep in mind:** <p align="justify">
• This project must be written in C

• Must be written in accordance with the Norm

• The function should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors

• All heap allocated memory space must be properly freed when necessary. No leaks allowed

• The Makefile to submit must compile the source files with the flags -Wall -Werror -Wextra and using cc compiler. The Makefile must not relink

• The libft is allowed in this project, you must copy its sources and its associated Makefile in a libft folder.

<p>
<br>

**Requirements:** <p align="justify">
• Don’t implement the buffer management of the original printf()

• Your function has to handle the following conversions: ```cspdiuxX%```

• Your function will be compared against the original printf()

• You must use the command ar to create your library. Using the libtool command is forbidden

• Your libftprintf.a has to be created at the root of your repository

You have to implement the following conversions:

| Format specifier | Data type |
| ---------------- | --------- |
| ```%c``` | single character |
| ```%s``` | string |
| ```%p``` | The void * pointer argument has to be printed in hexadecimal format |
| ```%d``` | decimal (base 10) number |
| ```%i``` | integer in base 10 |
| ```%u``` | unsigned decimal (base 10) number |
| ```%x``` | number in hexadecimal (base 16) lowercase format |
| ```%X``` | number in hexadecimal (base 16) uppercase format |
| ```%%``` | Percent sign |

<p>
<br>

**Program name:** <p align="justify">
```libftprintf.a```

</p>
<br>

**Files to turn in it:** <p align="justify">
```Makefile, *.h, */*.h, *.c, */*.c```

So you can create your own directory with the name you prefer, and the same is true for the .h and .c files that can be stored in a directory.

</p>
<br>

**Makefile rules required:** <p align="justify">
```NAME, all, clean, fclean, re```

The same rules were followed for the libft project.

</p>
<br>

**External functions allowed:** <p align="justify">
```malloc, free, write, va_start, va_arg, va_copy, va_end```

</p>
<br>

**The prototype of ft_printf() is:** <p align="justify">
```int	ft_printf(const char *, ...);```.

Basically, how does it works? ```ft_printf()``` takes two arguments: The first one is a string that specifies how the output should be formatted. Second one is a variable number of arguments, which are the values that will be formatted and printed (so, how the real one function works).

</p>
<br>

## Bonus Part

<p align="justify">

You don't have to do all the bonuses. You can choose between:

**Bonus list:** <p align="justify">

• Manage any combination of the following flags: ’-0.’ and the field minimum width under all conversions.

• Manage all the following flags: ’# +’ (Yes, one of them is a space).

| Format specifier | Data type |
| ---------------- | --------- |
| ```%0``` | When the 'width' option is specified, prepends zeros for numeric types. (The default prepends spaces).
For example, printf("%4X",3) produces    3, while printf("%04X",3) produces 0003. |
| ```%-``` | Left-align the output of this placeholder. (The default is to right-align the output.) |
| ```%.``` | The void * pointer argument has to be printed in hexadecimal format |

| Format specifier | Data type |
| ---------------- | --------- |
| ```%(space)``` | Prepends a space for positive signed-numeric types. positive =  , negative = -. This flag is ignored if the + flag exists. (The default doesn't prepend anything in front of positive numbers.) |
| ```%#``` | For g and G types, trailing zeros are not removed. For f, F, e, E, g, G types, the output always contains a decimal point. For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers. |
| ```%+``` | show always the sign of the number (is hidden for positive numbers to default) |


<p>
<br>

## What I need to know?

### Makefile<p align="justify">
This project is the "first one" that grants an understandjng of the utility of the Makefile and how to use it correctly. So, you must understand the syntax and how it works. Personally, I implemented the libft project, so I will have a good start for the next projects. I made two directories, one for libft (with .c, .h and Makefile files/file) and one for ft_printf (with .c and .h files/file). A ***Makefile*** is a special file that contains instructions on how to build a software project. It is used by the ```make``` utility to automate the build process. This file consists of a set of rules, each of which specifies how to build a particular target. A target can be anything from a binary executable file to a library to a documentation file.
</p>

**How it works? | Syntax of Makefile:** <p align="justify">
The ***comments*** are made with one hash (#), it is a good norm to divide the parts of the Makefile with ***commented titles***. We are using Makefile to create ```libftprintf.a```, ***archive libraries*** that are statically linked, so changes mean recompiling. The brackets ```()``` are used to group commands together. Instead, ```{}```are used to define variables. The ```ar rcs``` is GNU command wich is used to create and manage archives with his own flags.

```
#r tells ar to replace any existing members of the archive with the specified
#object files.
#c tells ar to create the archive if it doesn't exist.
#s tells ar to create an index of the archive members.
```

<p align="justify">

The rule ```.PHONY``` is used to identify ***false targets***, that represent a group of commands or actions. To create a false target, you need to declare it as a target in your Makefile.

<p align="justify">

```@$(AR)``` the ```@``` is used in Makefiles to suppress the output of a command (so it will not be displayed in the terminal).

<p align="justify">

```@$(MAKE) -C $(LIBFT_PATH)```. The ```-C``` flag is used to specify the directory in which the make command should be executed.

```
%.o: 		$(FT_PRINTF)/%.c
				@$(CC) $(CFLAGS) -c $< -o $@
```
<p align="justify">

The ```%.o:``` is the target pattern. The first row rappresent a pre-requisite needed (.c files into FT_PRINTF directory). ``` -c```  flag tells the compiler to not to link the object file with any other object files or libraries. So, it means that the compiler will only create an object file from the source file. ``` -o``` flag tells the name of the object file to create (that is the same of .c file name, but will be .o).


To see my [Makefile](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/ft_printf_macOS/Makefile).

<br>

### How to handle variable argument list? <p align="justify">
The variable argument list is handled thankfully to a **variadic functions**. These functions can take a variable number of argument, this is done by using the ellipsis (...) operator in the function declaration (for us is ft_printf()). To call a variadic function, you must use the ```va_start(), va_arg(), and va_end()``` macros. These macros are defined in the ```<stdarg.h>``` header file. The ```va_start()``` macro must be called first, before any calls to ```va_arg()```. It initializes a variable of type ```va_list``` to point to the first argument in the variable argument list. The ```va_arg()``` macro is used to retrieve the next argument from the variable argument list. It takes two arguments:

1. A pointer to a va_list variable.

2. The type of the argument to retrieve.

```va_arg()``` returns the value of the next argument in the variable argument list, converted to the specified type.

The ```va_end()``` macro must be called last, after all calls to ```va_arg()```. It cleans up the va_list variable and makes it unusable.
If you forget to call ```va_end()```, you can cause the program to crash. The ```va_copy()``` macro creates a copy of a va_list variable. This can be useful if you need to iterate over the variable argument list multiple times. Here are some things to keep in mind when using ```va_copy()```:

- Make sure to call ```va_copy()``` after ```va_start()``` and before any calls to ```va_arg()```.
- Make sure to call ```va_end()``` on all ```va_list``` variables, even if you are using ```va_copy()```.
- Do not call ```va_copy()``` on a ```va_list``` variable that has already been initialized with ```va_end()```.

An in-depth example:
The ```va_list	args;``` macro is used to declare a variable that will hold the list of arguments passed to the function. The norm provides the name of the variable, and it is called: args. The ```va_start(args, spec);``` macro is used to initialize the ```va_list``` variable, so the first variable is the ```va_list``` variable, and the second one must be a non variadic argument. In this case, spec is a ```const char *spec```. The ```va_arg``` macro is used to retrieve the next argument from the ```va_list```. Could be imagined as a ring chain. The syntax is ```va_arg(args, unsigned int)```, so you need to specify the va_list variable and the type of the argument retrieved. The ```va_end``` macro must be called to clean up the ```va_list``` variable after all arguments have been retrieved.

</p>
<br>

### printf

<p align="justify">

Printf return an integer value that represents the total number of characters successfully printed to the standard output. If there is an error during the printing process, a negative value is returned. You can test it:
```C
int	main(void)
{
	#include <stdio.h>

	int	i;

	i = 0;
	i = printf("%s\n", "try");
	printf ("%d\n", i);


	return(0);
}
```

**Syntax:** ```%[flags][width][.precision][length]specifier```

0. % Is used before the specifier and we must.
1. Specifier: It is the character that denotes the type of data.
2. Width: It is the sub-specifier that denotes the minimum number of characters that will be printed. If the number of characters is less than the specified width, the white space will be used to fill the remaining characters’ places. But if the number of characters is greater than the specified width, all the characters will be still printed without cutting off any.
3. Precision: Precision subspecifier meaning differs for different format specifiers it is being used with. For Integral data(d, i, u, o, x, X): Specifies the minimum number of digits to be printed. But unlike the width sub-specifier, instead of white spaces, this sub-specifier adds leading zeroes to the number. If the number has more digits than the precision, the number is printed as it is. For Float or Double Data(f, e, a, A): Specifies the number of digits to be printed after the decimal point. For String (s): Specifies the length of the string to be printed.
4. Length: Specifies the length of the data type in the memory. It is used in correspondence with data type modifiers.

There are 3 length sub-specifiers:

	h: With short int and unsigned short int
	l: With long int and unsigned long int.
	L: With long double

</p>
<br>

## Running Tests

### Testing mandatory part

<p align="justify">

To test this project, you need to create a ```main.c``` file, you can find a little example [here](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/main.c). Then you need to run ```make all```, and then compile:

•	**macOS:** ```gcc main.c libftprintf.a```. And run the ```a.out``` file.
	The output is:

```shell
e4r4p2% ./a.out
 0x0 0x0 real: 9
 0x0 0x0 fake: 9
```

•	**Ubuntu:** ```gcc -c main.c```, then ```gcc main.o libftprintf.a```. The output should be:

```shell
e4r4p2% ./a.out
(nil) (nil) real: 13
(nil) (nil) fake: 13
```

</p>

### Tester

I've used the [printfTester](https://github.com/Tripouille/printfTester) of [Tripouille](https://github.com/Tripouille). **It's very important to test the project in Ubuntu and/or macOS, the tester has different results.**

The command ```valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s``` is usefull to have a detailed overview of leaks. That's the output:

```shell
#the command to run
e4r11p3% valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s make m
#the output
==78927== Memcheck, a memory error detector
==78927== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==78927== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==78927== Command: make m
==78927==
Already up to date.
make[1]: Entering directory '/nfs/homes/fcorvaro/Desktop/print'
make[2]: Entering directory '/nfs/homes/fcorvaro/Desktop/print/libft'
make[2]: 'libft.a' is up to date.
make[2]: Leaving directory '/nfs/homes/fcorvaro/Desktop/print/libft'
make[1]: Leaving directory '/nfs/homes/fcorvaro/Desktop/print'
[Mandatory]
category: c
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
category: s
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK
category: p
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
category: d
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.OK 23.OK 24.OK 25.OK 26.OK 27.OK 28.OK 29.OK
category: i
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.OK 23.OK 24.OK 25.OK 26.OK 27.OK 28.OK 29.OK
category: u
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.OK 23.OK 24.OK 25.OK 26.OK 27.OK 28.OK 29.OK
category: x
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.OK 23.OK 24.OK 25.OK 26.OK 27.OK 28.OK 29.OK 30.OK 31.OK
category: X
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.OK 22.OK 23.OK 24.OK 25.OK 26.OK 27.OK 28.OK 29.OK 30.OK 31.OK
category: %
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK
category: mix
1.OK
==78927== LEAK SUMMARY:
==78927==    definitely lost: 0 bytes in 0 blocks
==78927==    indirectly lost: 0 bytes in 0 blocks
==78927==      possibly lost: 0 bytes in 0 blocks
==78927==    still reachable: 160,031 bytes in 1,702 blocks
==78927==         suppressed: 0 bytes in 0 blocks
==78927==
==78927== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

</p>


## Evaluation

### Correction sheet
<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/eval_10-2023.png">
<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/eval_10-2023(2).png">
</p>
<br>

### Norminette Result

<br>

### Moulinette Result

<br>

## Treasure hunt

<p align="justify">

The code

```
++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>.>---.++++++++++++.++.+++
+++.--.<<++.>>------.------------.+++++++++++++.<<.>>++++++.------------
.-------. +++++++++++++++++++.<<.>>----------------.+++++.+++++++++.---
----------.--.+ ++++++++++++++++.--------.+++++++++++++.<<.>>----------
-------------.+++.+++ ++++.---.----.+++++++++++++++++.---------------
--.-.<<.>>+++++.+++++.<<.>-------...
```

is made for the trasure hunt. The code is in Python and it is a program that prints the following text:

```
Treasure hunt!

The next stop is:

**In a hidden place,
where the wind blows strong.**

Good luck!
```
To decipher the code, you need to use a Python interpreter.

</p>
<br>

## Support Me

<p align="justify">
I hope this guide helped you understand this project. Remember to ⭐ the repository.
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

- [Variadic Functions 1](https://www.ibm.com/docs/en/i/7.3?topic=lf-va-arg-va-copy-va-end-va-start-handle-variable-argument-list)
- [Variadic Functions 2](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [Variadic Functions 3](https://onepunchcoder.medium.com/variadic-functions-explained-fd3b4ab6fd84)
- [Makefile](https://www.gnu.org/software/make/manual/make.html#Rule-Introduction)
- [printf 1](https://en.wikipedia.org/wiki/Printf)
- [printf 2](https://www.geeksforgeeks.org/printf-in-c/)
- [static library](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)
<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
