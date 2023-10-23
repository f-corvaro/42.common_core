# **FT_PRINTF**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/ft_printf"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/ft_printf_intra.png">

<p align="justify">

v9 | v10
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/.extra/en.subject(new).pdf)

--> This guide is made for the subject v10, there aren't differences between the two subjects <--

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

• The libft is allowed in this project, you must copy its sources and its associated Makefile in a libft folder. CAPISCI MAKEFILE CHE INTENDE

<p>
<br>

**Requirements:** <p align="justify">
• Don’t implement the buffer management of the original printf()

• Your function has to handle the following conversions: ```cspdiuxX%```

• Your function will be compared against the original printf()

• You must use the command ar to create your library. Using the libtool command is forbidden

• Your libftprintf.a has to be created at the root of your repository

You have to implement the following conversions:

• ```%c``` Prints a single character

• ```%s``` Prints a string (as defined by the common C convention)

• ```%p``` The void * pointer argument has to be printed in hexadecimal format

• ```%d``` Prints a decimal (base 10) number

• ```%i``` Prints an integer in base 10

• ```%u``` Prints an unsigned decimal (base 10) number

• ```%x``` Prints a number in hexadecimal (base 16) lowercase format

• ```%X``` Prints a number in hexadecimal (base 16) uppercase format

• ```%%``` Prints a percent sign

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

</p>
<br>

**External functions allowed:** <p align="justify">
```malloc, free, write, va_start, va_arg, va_copy, va_end```

</p>
<br>

**The prototype of ft_printf() is:** <p align="justify">
```int	ft_printf(const char *, ...);```.

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

### Makefile: <p align="justify">
This project is the "first one" that grants an understandjng of the utility of the Makefile and how to use it correctly. So, you must understand the syntax and how it works. Personally, I implemented the libft project, so I will have a good start for the next projects. I made two directories, one for libft (with .c, .h and Makefile files/file) and one for ft_printf (with .c and .h files/file). A ***Makefile*** is a special file that contains instructions on how to build a software project. It is used by the ```make``` utility to automate the build process. This file consists of a set of rules, each of which specifies how to build a particular target. A target can be anything from a binary executable file to a library to a documentation file.
<p>

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


To see my [->| Makefile |<-](https://github.com/f-corvaro/42.common_core/blob/main/ft_printf/ft_printf/Makefile) .
<p>
<br>

## Evaluation

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
To decipher the code, you need to use a Python interpreter

</p>
<br>

## Support Me

<p align="justify">
I hope this guide helped you to understand this project, remember to ⭐ the repository.
If you want to support me:</p>

<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg">

<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg">

<br>

## Skills developed

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim,vscode" />
  </a>
</p><br>

## Sources

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
