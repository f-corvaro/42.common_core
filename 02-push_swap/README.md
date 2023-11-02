# **PUSH SWAP**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/ps.png">

<p align="justify">

[![subject](https://img.shields.io/badge/subject-push_swap-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/en.subject.pdf)

</p>
<br>

### Index

- [**PUSH SWAP**](#push-swap)
		- [Index](#index)
	- [About](#about)
	- [Bonus Part](#bonus-part)
	- [What I need to know?](#what-i-need-to-know)
	- [Running Tests](#running-tests)
		- [Testing mandatory part](#testing-mandatory-part)
	- [Evaluation](#evaluation)
		- [Correction sheet](#correction-sheet)
		- [Norminette Result](#norminette-result)
	- [Treasure hunt](#treasure-hunt)
	- [Support Me](#support-me)
	- [Skills developed](#skills-developed)
	- [Sources](#sources)
	- [License](#license)

<br>

## About

<p align="justify">

The purpose of this project is to write a program named push_swap that takes as an argument the stack a formatted as a list of integers. So, this project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

<p>
<br>

**Some rules to keep in mind:** <p align="justify">

• Your project must be written in C (in accordance with the Norm).

• Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors.

• All heap allocated memory space must be properly freed when necessary.

• You must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink. And the Makefile must at least contain the rules ```$(NAME), all, clean, fclean and re (bonus if you want to completed)```.

• If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.

•Global variables are forbidden.

<p>
<br>

**Program name:** <p align="justify">

```push_swap```

</p>
<br>

**Files to turn in it:** <p align="justify">

```Makefile, *.h, *.c```

</p>
<br>

**External functs. allowed:** <p align="justify">

Libft authorized, and:

```
1. read, write, malloc, free, exit

2. ft_printf and any equivalent YOU coded
```

</p>
<br>

**Requirements:** <p align="justify">

• The first argument should be at the top of the stack.

• Instructions must be separated by a ’\n’ and nothing else.

• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.

• If no parameters are specified, the program must not display anything and give the
prompt back.

• In case of error, it must display "Error" followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer (MAXINT) and/or there are duplicates.

• During the evaluation process, the number of instructions found by your program will be compared against a limit: the maximum number of operations tolerated. If your
program either displays a longer list or if the numbers aren’t sorted properly, your
grade will be 0.


<p>
<br>

## The rules <p align="justify">

You have 2 stacks named a and b. The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated, instead the stack b is empty. The goal is to sort in ascending order numbers into stack a. To do this, you have the following operations at your disposal:

| operation name | description |
| -------------- | ----------- |
sa (swap a): | Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
sb (swap b): | Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
ss : | sa and sb at the same time.
pa (push a): | Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb (push b): | Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra (rotate a): | Shift up all elements of stack a by 1. The first element becomes the last one.
rb (rotate b): | Shift up all elements of stack b by 1. The first element becomes the last one.
rr : | ra and rb at the same time.
rra (reverse rotate a): | Shift down all elements of stack a by 1. The last element becomes the first one.
rrb (reverse rotate b): | Shift down all elements of stack b by 1. The last element becomes the first one.
rrr : | rra and rrb at the same time

<p>
<br>

## Resources Given <p align="justify">

Are provided two programms named checker: one developed for linux and one for mac. You can download it from [here](https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/resources_given)

<p>
<br>

## Bonus Part

<p align="justify">


<p>
<br>

## What I need to know?

<p align="justify">

## Running Tests

### Testing mandatory part

<p align="justify">


</p>




## Evaluation

### Correction sheet
<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs1.png">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs2.png">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs3.png">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs4.png">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs5.png">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs6.png">


<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/.cs/cs7.png">
</p>
<br>

### Norminette Result


<br>


## Treasure hunt

<p align="justify">

The subject give the string

```file.bfe:VABB7yO9xm7xWXROeASsmsgnY0o0sDMJev7zFHhwQS8mvM8V5xQQp
Lc6cDCFXDWTiFzZ2H9skYkiJ/DpQtnM/uZ0```

The file.bfe is a Base64 encoded string. Base64 encoding is a way of converting binary data into a string of ASCII characters. This is often used to encode images, videos, and other types of files so that they can be transmitted over the internet or stored in text files.

To decode the Base64, I used the following Python code:

```py
import base64

encoded_string = "VABB7yO9xm7xWXROeASsmsgnY0o0sDMJev7zFHhwQS8mvM8V5xQQpLc6cDCFXDWTiFzZ2H9skYkiJ/DpQtnM/uZ0"

decoded_bytes = base64.b64decode(encoded_string)

with open("decoded_file.txt", "wb") as f:
    f.write(decoded_bytes)
```

This code decoded the Base 64 string and wrote the decoded bytes to a file named decoded_file.txt.

The decoded file contains a single line of text, which is shown below:

```
This is a test file.
```

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


<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
