# **GET_NEXT_LINE**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/get_next_line"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/get_next_line_intra.png">

<p align="justify">

v10 | v12
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject(new).pdf)


</p>
<br>

### Index

- [**GET\_NEXT\_LINE**](#get_next_line)
    - [Index](#index)
  - [About](#about)
  - [To figure out](#to-figure-out)
  - [Into the code](#into-the-code)
  - [Bonus part](#bonus-part)
  - [Evaluation](#evaluation)
    - [Testing mandatory part](#testing-mandatory-part)
    - [Testing bonus part](#testing-bonus-part)
    - [Tester](#tester)
    - [Correction sheet](#correction-sheet)
    - [Norminette Result](#norminette-result)
    - [Moulinette Result](#moulinette-result)
  - [Support Me](#support-me)
  - [Skills developed](#skills-developed)
  - [Sources](#sources)
  - [License](#license)

<br>

## About

<p align="justify">

The `get_next_line()` function is a particularly useful function, as it allows you to read a line of text from a file descriptor without having to know the length of the line in advance. This function is often used to read lines of text from files that are very large or that contain a variable number of lines. The function returns a pointer to the buffer containing the line read, or NULL if there are no more lines to read. Is a very important function that will help us in the future, so we will adding this new one function to the our library (libft). The concept to understand for this project is about the static variables and the use of file descriptor. Is forbidden to use global variables, to use libft function and lseek(). The function should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. All heap allocated memory space must be properly freed when necessary. The repeated calls, e.g. using a loop, to our get_next_line function should let us read the text file pointed to the file descriptor, one line at a time

</p>

<br>

**Files to turn in it:** <p align="justify">
```get_next_line.c, get_next_line.h and get_next_line_utils.c``` (where we can add all the helper functions)

</p>


**Prototype of the function:** <p align="justify">
```char *get_next_line(int fd)```;
Where fd is the file descriptor to read from

</p>

**External functions allowed:** <p align="justify">
```free(), malloc(), read()```

</p>

**Expected return:** <p align="justify">
The function will return the read line correctly or will return ```NULL``` if there is nothing to read, or an error occured. ***Please note*** that the returned line should include the terminating ```\n``` character, except if the end of file was reached and does not end with a ```\n``` character

</p>

**Option to add at compiler call:** <p align="justify">
```-D BUFFER_SIZE=n```.
It will define the buffer size for ```read()```. The project myst be able to compile with and without the additional flag used. You can choose the default value of your choice.

</p>

<br>

## To figure out

<p align="justify">

**Memory layout of C programs:** typically is divided in these sections.
<p align="justify">
Text segment  (i.e. instructions) -> Initialized data segment-> Uninitialized data segment  (bss) -> Heap -> Stack.
</p>

<img width="350" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/C-memory.png">

***Text Segment:*** <p align="justify">Is one of the sections of a program in an object file or in memory, which contains executable instructions. As a memory region, a text segment may be placed below the heap or stack in order to prevent heaps and stack overflows from overwriting it. Usually, the text segment is sharable so that only a single copy needs to be in memory for frequently executed programs, such as text editors, the C compiler, the shells, and so on. Also, the text segment is often read-only, to prevent a program from accidentally modifying its instructions
</p>

***Initialized Data Segment:*** <p align="justify"> A data segment is a portion of the virtual address space of a program, which contains the global variables and static variables that are initialized by the programmer.
Note that, the data segment is not read-only, since the values of the variables can be altered at run time.
This segment can be further classified into the initialized read-only area and the initialized read-write area.

***Uninitialized Data Segment:*** <p align="justify"> called also the “bss” segment. Data in this segment is initialized by the kernel to arithmetic 0 before the program starts executing uninitialized data starts at the end of the data segment and contains all global variables and static variables that are initialized to zero or do not have explicit initialization in source code. For instance, a variable declared static int i; would be contained in the BSS segment. For instance, a global variable declared int j; would be contained in the BSS segment

***Stack:*** <p align="justify"> The stack area traditionally adjoined the heap area and grew in the opposite direction; when the stack pointer met the heap pointer, free memory was exhausted. (With modern large address spaces and virtual memory techniques they may be placed almost anywhere, but they still typically grow in opposite directions). The stack area contains the program stack, a LIFO structure, typically located in the higher parts of memory. On the standard PC x86 computer architecture, it grows toward address zero; on some other architectures, it grows in the opposite direction. A “stack pointer” register tracks the top of the stack; it is adjusted each time a value is “pushed” onto the stack. The set of values pushed for one function call is termed a “stack frame”; A stack frame consists at minimum of a return address. Stack, where automatic variables are stored, along with information that is saved each time a function is called. Each time a function is called, the address of where to return to and certain information about the caller’s environment, such as some of the machine registers, are saved on the stack. The newly called function then allocates room on the stack for its automatic variables. This is how recursive functions in C can work. Each time a recursive function calls itself, a new stack frame is used, so one set of variables doesn’t interfere with the variables from another instance of the function

***Heap:*** <p align="justify"> Heap is the segment where dynamic memory allocation usually takes place.
The heap area begins at the end of the BSS segment and grows to larger addresses from there. The Heap area is managed by malloc, realloc, and free, which may use the brk and sbrk system calls to adjust its size (note that the use of brk/sbrk and a single “heap area” is not required to fulfill the contract of malloc/realloc/free; they may also be implemented using mmap to reserve potentially non-contiguous regions of virtual memory into the process’ virtual address space). The Heap area is shared by all shared libraries and dynamically loaded modules in a process
<br>

**Static variables:** <p align="justify"> have the properties of preserving their value after they are out of their scope and makes the variable retain its value among multiple calls. A static int variable remains in memory while the program is running. A normal variable is destroyed when a function call where the variable was declared is over (e.g. the static int is used to count the number of times a function is called). Static variables are allocated memory in the data segment, not the stack segment. Static variables should not be declared inside a structure. The reason is C compiler requires the entire structure elements to be placed together that is why memory allocation for structure members should be contiguous. It is possible to declare structure inside the function (stack segment) or allocate memory dynamically(heap segment) or it can be even global (BSS or data segment). Whatever might be the case, all structure members should reside in the same memory segment because the value for the structure element is fetched by counting the offset of the element from the beginning address of the structure. Separating out one member alone to a data segment defeats the purpose of structure and it is possible to have an entire structure as static.
</p>

<br>

## Into the code

<p align="justify">

In this project it will be something new to use:
1. `ssize_t` is used for a count of bytes or an error indication (-1). It is a signed integer type capable of storing values at least in the range [-1, SSIZE_MAX]
2. `ssize_t read(int fd, void *buf, size_t count);` The function `read()` in C reads data from a file descriptor and stores it in a buffer. The function returns the number of bytes read, or -1 in case of an error. count is the maximum number of bytes reads
3. `open()` function in C opens a file for reading, writing or both. It returns a file descriptor, which is a small, non-negative integer that is used to access the file. It return -1 if error occur. The syntax is `int open(const char *pathname, int flags);` where pathname is the path to the file to open. the flags are the file opening options. To combine different flags is used `|` operator
`O_RDONLY`: Opens the file in read-only mode
`O_WRONLY`: Opens the file in write-only modn change the timeout value in Makefile. For rigorous test you should run all tests with valgrid using Linuxe
`O_RDWR`: Opens the file in read-write mode
`O_CREAT`: Creates the file if it does not already exist
`O_TRUNC`: Truncates the file to zero bytes if it already exists
4. The `BUFFER_SIZE` is set to 1000 in `get_next_line.h` because it is a good compromise between memory usage and performance. A larger buffer size will allow the function to read more data at once, which can improve performance, but it will also use more memory. A smaller buffer size will use less memory, but it may also decrease performance. The value of 1000 is a good starting point for most cases. If you are finding that the function is not reading enough data at once, you can try increasing the BUFFER_SIZE. However, if you are finding that the function is using too much memory, you can try decreasing the `BUFFER_SIZE`. A buffer is a region of memory used to temporarily store data while it is being moved from one place to another. Buffers are typically used when there is a difference between the rate at which data is received and the rate at which it can be processed. For example, when you download a file from the internet, your computer will store the incoming data in a buffer until it has enough data to save it to disk. Similarly, when you watch a streaming video, your computer will buffer the video data so that it can continue to play smoothly even if the network connection is slow. The buffer size is the amount of memory that is allocated to the buffer. It is important to choose a buffer size that is large enough to store enough data to avoid interruptions, but not so large that it wastes memory
</p>

<br>

## Bonus part

<p align="justify">

The requirements of the bonus parts are to develop `get_next_line()` using only one static variable. In addition to the mandatory part files, you will turn in the 3 following files: `get_next_line_bonus.c, get_next_line_bonus.h, get_next_line_utils_bonus.c`.
The bonus part will only be assessed if the mandatory part is
PERFECT. Perfect means the mandatory part has been integrally done
and works without malfunctioning. If you have not passed ALL the
mandatory requirements, your bonus part will not be evaluated at all. The `get_next_line()` function can manage multiple fd at the same time. For example, if you can read from the file descriptors 3, 4 and 5, you should be able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd. `static char	*str[4096];` was choosen because the C standard requires that a compiler be able to process lines of at least 4096 characters. However, most modern compilers have no upper limit on the size of a line, other than the amount of available memory.

</p>

<br>

## Evaluation

### Testing mandatory part

<p align="justify">
You only have to edit the get_next_line.c file and uncomment the main. The get_next_line function will read the `file.txt` file that I made. Then simply run this command (change "xx" with desired buffer size):

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
```

But also try the code without the flag `-D BUFFER_SIZE=xx` because must works in both situation.

```shell
gcc -Wall -Werror -Wextra get_next_line.c get_next_line_utils.c && ./a.out
```

To find leaks and error I used `Valgrid`. First step is the installation:

```shell
sudo apt install valgrind  # Ubuntu, Debian, etc.
sudo yum install valgrind  # RHEL, CentOS, Fedora, etc.
sudo pacman -Syu valgrind  # Arch, Manjaro, Garuda, etc.
sudo pkg ins valgrind      # FreeBSD
```

The syntax is:
```shell
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./a.out
```

The flags are:
1. `--leak-check=full`: "each individual leak will be shown in detail"
2. `--show-leak-kinds=all`: Show all of "definite, indirect, possible, reachable" leak kinds in the "full" report
3. `--track-origins=yes`: Favor useful output over speed. This tracks the origins of uninitialized values, which could be very useful for memory errors. Consider turning off if Valgrind is unacceptably slow
4. `-s`: for the list of detected and suppressed errors
5. ADDITIONAL `--log-file`: Write to a file. Useful when output exceeds terminal space

The output is:

```shell
==15214== Memcheck, a memory error detector
==15214== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==15214== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==15214== Command: ./a.out
==15214==
line [01]: ciao
line [02]: come va
line [03]: prova
line [04]: daje
line [05]: 1234
line [06]: daje
line [07]: try again
line [08]:
line [09]: uuuh
line [10]: UANM
line [11]: 1w3erw1312as
line [12]: dsaijkakowdwaline [13]: (null)line [14]: (null)==15214==
==15214== HEAP SUMMARY:
==15214==     in use at exit: 0 bytes in 0 blocks
==15214==   total heap usage: 125 allocs, 125 frees, 1,653 bytes allocated
==15214==
==15214== All heap blocks were freed -- no leaks are possible
==15214==
==15214== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

</p>
<br>

### Testing bonus part

<p align="justify">

You only have to edit the get_next_line_bonus.c file and uncomment the main. The get_next_line function will read the `file.txt, file2.txt, file3.txt` files that I made. Then simply run this command (change "xx" with desired buffer size):

```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line_bonus.c get_next_line_utils_bonus.c
```

But also try the code without the flag `-D BUFFER_SIZE=xx` because must works in both situation.

To find leaks and error I used `Valgrid`.

The syntax is:

```shell
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./a.out
```

The output is:

```shell
==13441== Memcheck, a memory error detector
==13441== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13441== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==13441== Command: ./a.out
==13441==
line [01]: /=∂/\/\[](_)§ /\/\@|V †|-|@ ̄| ̄/-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???
line [01]: 2222222222222222
line [01]: 333333333333333333333
line [02]: ciao
line [02]: 22
line [02]: 33
line [03]: come va
line [03]: 22
line [03]: 3
line [04]: prova
line [04]: 222222222222
line [04]:
line [05]: daje
line [05]: 222222222222
line [05]: 33333333333333333333333
line [06]: 1234
line [06]: 22222222222222
line [06]: 333333333333
line [07]: daje
line [07]:
line [07]: 33333333333333333
line [08]: try again
line [08]: 2222222222222
line [08]: 33333333333
line [09]:
line [09]: 2222
line [09]: 33333333333
line [10]: uuuh
line [10]: 222222222222222
line [10]: 3333333
line [11]: UANM
line [11]: 2222
line [11]: 333333
line [12]: 1w3erw1312as
line [12]: 222222
line [12]: 3333
line [13]: dsaijkakowdwaline [13]: 2222222222line [13]: 333line [14]: (null)line [14]: (null)line [14]: (null)==13441==
==13441== HEAP SUMMARY:
==13441==     in use at exit: 0 bytes in 0 blocks
==13441==   total heap usage: 133 allocs, 133 frees, 46,037 bytes allocated
==13441==
==13441== All heap blocks were freed -- no leaks are possible
==13441==
==13441== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

</p>

<br>

### Tester

<p align="justify">

I used the [gnlTester](https://github.com/Tripouille/gnlTester) made by [Tripouille](https://github.com/Tripouille). It is very easy to use:

1. Make sure that you are in the path of the folder `get_next_line` (e.g. ```~/fcorvaro/Desktop/get_next_line```)

2. Use the command `git clone` and clone the folder into your `get_next_line` folder

```shell
git clone git@github.com:Tripouille/gnlTester.git
```

3. Then `cd gnlTester`

4. Run the test with:

```shell
make m # launch mandatory tests
make b # launch bonus tests
make a # launch mandatory tests + bonus tests
```

Keep in mind that you can change the timeout value in Makefile. For rigorous test you should run all tests with valgrid using Linux (e.g. `valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s make m`). The tester, for me, worked only in 42. Pay attetion, the tester is NOT the assolute truth, just a second check to the previosly done.

</p>

<br>


### Correction sheet

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs1.png">

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs2.png">

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs3.png">

<br>

### Norminette Result

```shell
get_next_line.c: OK!
get_next_line.h: OK!
get_next_line_bonus.c: OK!
get_next_line_utils_bonus.c: OK!
get_next_line_utils.c: OK!
get_next_line_bonus.h: OK!
```
<br>

### Moulinette Result

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/Moulinette_gnl.png">

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

1. [Static variable](https://www.geeksforgeeks.org/static-variables-in-c/)
2. [C memory](https://www.geeksforgeeks.org/memory-layout-of-c-program/)
3. [Valgrid](https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks)

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
