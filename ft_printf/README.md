# **FT_PRINTF**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_intra.png">

<p align="justify">

v9 | v10
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject(new).pdf)

<table><tr><td>This guide is made for the subject v10, there aren't differences between the two subjects</td></tr></table>

</p>
<br>

### Index

- [**FT\_PRINTF**](#ft_printf)
		- [Index](#index)
	- [About](#about)
	- [Bonus Part](#bonus-part)
	- [What I need to know?](#what-i-need-to-know)
		- [Makefile: ](#makefile-)
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
| ```%c``` | Character |
| ```%s``` | String |
| ```%p``` | Pointer |
| ```%d``` | Signed integer |
| ```%i``` | Signed integer |
| ```%u``` | Unsigned integer |
| ```%x``` | Hexadecimal integer (lowercase) |
| ```%X``` | Hexadecimal integer (uppercase) |
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

<p>
<br>

## What I need to know?

### Makefile:<p align="justify">
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


To see my [Makefile](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/ft_printf/Makefile).

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
<p>
<br>

### printf:

[https://github.com/f-corvaro/42.common_core/tree/main/ft_printf/.extra/printf.png](https://github.com/f-corvaro/42.common_core/tree/main/ft_printf)
## Running Tests

## Evaluation

### Testing mandatory part
### Testing bonus part
### Tester

### Correction sheet
<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_cs1.png">
<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_cs2.png">
<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_cs3.png">
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
- [Makefile](https://www.gnu.org/software/make/manual/make.html#Rule-Introduction)
- [printf](https://en.wikipedia.org/wiki/Printf)
-
<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
