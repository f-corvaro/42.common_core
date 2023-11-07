# **LIBFT**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/libft.png">

[![subject](https://img.shields.io/badge/subject-libft-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/en.subject.pdf)

### Index

- [**LIBFT**](#libft)
    - [Index](#index)
  - [Folder Structure](#folder-structure)
  - [0 - About](#0---about)
  - [1 - What's in it?](#1---whats-in-it)
  - [2 - Type of files](#2---type-of-files)
  - [3 - Things "new" to understand](#3---things-new-to-understand)
  - [4 - Functions Index](#4---functions-index)
  - [5 - Running Tests](#5---running-tests)
  - [6 - Evaluation](#6---evaluation)
    - [6.1 - Tester](#61---tester)
    - [6.2 - Correction Sheet](#62---correction-sheet)
    - [6.3 - Moulinette Result](#63---moulinette-result)
  - [7 - Special Thanks](#7---special-thanks)
  - [Support Me](#support-me)
  - [Skills developed](#skills-developed)
  - [License](#license)


<br>

## Folder Structure

```
.
├── 00-libft
│   ├── libft
│   │   ├── ft_atoi.c
│   │   ├── ft_bzero.c
│   │   ├── ft_calloc.c
│   │   ├── ft_isalnum.c
│   │   ├── ft_isalpha.c
│   │   ├── ft_isascii.c
│   │   ├── ft_isdigit.c
│   │   ├── ft_isprint.c
│   │   ├── ft_itoa.c
│   │   ├── ft_lstadd_back.c
│   │   ├── ft_lstadd_front.c
│   │   ├── ft_lstclear.c
│   │   ├── ft_lstdelone.c
│   │   ├── ft_lstiter.c
│   │   ├── ft_lstlast.c
│   │   ├── ft_lstmap.c
│   │   ├── ft_lstnew.c
│   │   ├── ft_lstsize.c
│   │   ├── ft_memchr.c
│   │   ├── ft_memcmp.c
│   │   ├── ft_memcpy.c
│   │   ├── ft_memmove.c
│   │   ├── ft_memset.c
│   │   ├── ft_putchar_fd.c
│   │   ├── ft_putendl_fd.c
│   │   ├── ft_putnbr_fd.c
│   │   ├── ft_putstr_fd.c
│   │   ├── ft_split.c
│   │   ├── ft_strchr.c
│   │   ├── ft_strdup.c
│   │   ├── ft_striteri.c
│   │   ├── ft_strjoin.c
│   │   ├── ft_strlcat.c
│   │   ├── ft_strlcpy.c
│   │   ├── ft_strlen.c
│   │   ├── ft_strmapi.c
│   │   ├── ft_strncmp.c
│   │   ├── ft_strnstr.c
│   │   ├── ft_strrchr.c
│   │   ├── ft_strtrim.c
│   │   ├── ft_substr.c
│   │   ├── ft_tolower.c
│   │   ├── ft_toupper.c
│   │   ├── libft.h
│   │   └── Makefile
```

## 0 - About
<p align="justify">
C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. The purpose of the project is to re-code some libc functions and other common utility functions to be reused in the subsequent 42 projects. In this project there is norminette and moulinette. All explanation of the coding are into the code as a comments.
</p>
<br>

## 1 - What's in it?

There are 4 sections:

1. **Libc Functions:** <p align="justify"> Some of the standard C functions;</p>
2. **Additional Functions:** <p align="justify">Functions that will be useful for other projects;</p>
3. **Bonus Functions:** <p align="justify">Functions that will be useful for linked list manipulation;</p>
4. **Other:** <p align="justify"> makefile and libft.h.</p>

<br>

## 2 - Type of files

**.c - source code file:**<p align="justify">
Where all the "instruction" are written.</p>

**.h - header:**<p align="justify">
Useful because insteade of doing `#include <library.h>` for all c files, you will write only once in your header. In advance you can reuse the function you did in your library for other functions in your library. For example in `ft_bzero.c` I use the `ft_memset.c`. Obviousbly you need to add `#include <libft.h>` at the top of all your files .c.
</p>

**makefile:**<p align="justify">
Is a file where you compile your projects, instead of use an `int main` and `gcc` to compile, you will use this file. You have some commands to write in the console to compile (see below "Running Tests") that you write. A makefile consists of a set of dependencies and rules. A dependency has a target (a file to be created) and a set of source files upon which it is dependent. The rules describe how to create the target from the dependent files. Typically, the target is a single executable file. In this project we want to create a `.o` files. The makefile is read by the `make` command, which determines the target file or files that are to be made and then compares the dates and times of the source files to decide which rules need to be invoked to construct the target. Often, other intermediate targets have to be created before the final target can be made. The make command uses the makefile to determine the order in which the targets have to be made and the correct sequence of rules to invoke.
</p>

**.o - object:**<p align="justify">
The `.o` suffix is the object code. GCC and other compilers actually run through several steps when compiling.</p>

1. <p align="justify"> Pre-processor. This resolves your #define and #include and other #... macros. This step is rarely output to a file - it's almost universally passed directly into the next step.</p>

2. <p align="justify"> Object compilation. The lines of code are transformed into machine code and symbol tables. The symbol tables are not yet linked into an executable. For larger programs, this is an intermediate output when you are compiling multiple files which may have dependencies on one another.</p>

3. <p align="justify"> Linking. The symbols in the object code are now resolved to the actual memory locations or call points to provide a fully fledged executable.</p>

<p align="justify"> In reality it's just a precompiled version of a source file.</p>

**.a - archive libraries:**<p align="justify">
Archive libraries (.a) are statically linked. The library will remain unchanged unless the program is recompiled. This is the most straight forward way of using a library as the final result is a simple executable with no dependencies.
</p>
<br>

## 3 - Things "new" to understand

**malloc:** <p align="justify"> ```malloc()``` allocates memory of a requested size and returns a pointer to the beginning of the allocated block. To hold this returned pointer, we must create a variable. The pointer should be of same type used in the malloc statement.
C does not know the data type it is allocating memory for; so we use ```sizeof()``` to allocate the right amount of memory for that data type.</p>

```
char    *arr;

arr = (char *)malloc(sizeof(char) * 10)
```

<p align="justify"> This statement used malloc to set aside memory for an array of 10 char. As sizes can change between computers, it’s important to use the sizeof() function to calculate the size on the current computer. Any memory allocated during the program’s execution will need to be freed before the program closes. To free memory, we can use the free() function.</p>

```
free(arr);
```
<p align="justify">
This statement will deallocate the memory previously allocated. C does not come with a garbage collector; as a result, memory not properly freed will continue to be allocated after the program is closed. malloc() is used for: </p>
1. <p align="justify"> Dynamic memory allocation and is useful when you don’t know the amount of memory needed during compile time; </p>
2. <p align="justify"> Allocating memory allows objects to exist beyond the scope of the current block. </p>
3. <p align="justify"> C passes by value instead of reference. Using malloc to assign memory, and then pass the pointer to another function, is more efficient than having the function recreate the structure. </p>


**linked lists:**

<p align="justify"> Like arrays, a linked list is a linear data structure. Linked list elements are not stored at a contiguous location; the elements are linked using pointers. They include a series of connected nodes. Here, each node stores the data and the address of the next node. </p>

<a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/lle.png">

<p align="justify">
Arrays can be used to store linear data of similar types, but arrays have some limitations: </p>
 </p>

1. <p align="justify"> The size of the arrays is fixed; </p>
2. <p align="justify"> Insertion of a new element / Deletion of a existing element in an array of elements is expensive. </p>

<p align="justify"> The advantages of linked lists over arrays are: </p>

1. <p align="justify"> Dynamic Array. </p>
2. <p align="justify"> Ease of Insertion/Deletion. </p>
3. <p align="justify"> Insertion at the beginning is a constant time operation and takes O(1) time, as compared to arrays where inserting an element at the beginning takes O(n) time,where n is the number of elements in the array. </p>

Drawbacks of Linked Lists: </p>

1. <p align="justify"> Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do a binary search with linked lists efficiently with its default implementation. </p>
2. <p align="justify"> Extra memory space for a pointer is required with each element of the list. </p>
3. <p align="justify"> It takes a lot of time in traversing and changing the pointers. </p>
4. <p align="justify"> Reverse traversing is not possible in singly linked lists. </p>
5. <p align="justify"> It will be confusing when we work with pointers. </p>
6. <p align="justify"> Direct access to an element is not possible in a linked list as in an array by index. </p>
7. <p align="justify"> Searching for an element is costly and requires O(n) time complexity. </p>
8. <p align="justify"> Sorting of linked lists is very complex and costly. </p>
9. <p align="justify"> Appending an element to a linked list is a costly operation, and takes O(n) time, where n is the number of elements in the linked list, as compared to arrays that take O(1) time. </p>
10. <p align="justify"> Not cache-friendly. Since array elements are contiguous locations, there is the locality of reference which is not there in the case of linked lists. </p>

<p align="justify"> Types of Linked Lists: </p>

1. <p align="justify"> Simple Linked List – In this type of linked list, one can move or traverse the linked list in only one direction. where the next pointer of each node points to other nodes but the next pointer of the last node points to NULL. It is also called “Singly Linked List”. </p>

2. <p align="justify"> Doubly Linked List – In this type of linked list, one can move or traverse the linked list in both directions (Forward and Backward). </p>

3. <p align="justify"> Circular Linked List – In this type of linked list, the last node of the linked list contains the link of the first/head node of the linked list in its next pointer. </p>

4. <p align="justify"> Doubly Circular Linked List – A Doubly Circular linked list or a circular two-way linked list is a more complex type of linked list that contains a pointer to the next as well as the previous node in the sequence. The difference between the doubly linked and circular doubly list is the same as that between a singly linked list and a circular linked list. The circular doubly linked list does not contain null in the previous field of the first node. </p>

5. <p align="justify"> Header Linked List – A header linked list is a special type of linked list that contains a header node at the beginning of the list. </p>

<p align="justify"> The basic operations on linked list are deletion, insertion, search and display. A linked list is represented by a pointer to the first node of the linked list. The first node is called the head of the linked list. If the linked list is empty, then the value of the head points to NULL. Each node in a list consists of at least two parts: </p>

1. <p align="justify"> A Data Item (we can store integers, strings, or any type of data). </p>

2. <p align="justify"> Pointer (Or Reference) to the next node (connects one node to another) or An address of another node. </p>

<p align="justify"> In C, we can represent a node using structures. </p>

```
struct Node {
    int data;
    struct Node* next;
};
```

<br>

## 4 - Functions Index

<p align="center">


| Libc functions  | Additional functions | Bonus part |  other |
| ------------- | ------------- | ------------- |  ------------- |
| [ft_atoi.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_atoi.c)| [ft_itoa.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_itoa.c)  | [ft_lstadd_back.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstadd_back.c)  | [libft.h](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/libft.h) |
| [ft_bzero.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_bzero.c) | [ft_putchar_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putchar_fd.c)  | [ft_lstadd_front.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstadd_front.c)  | [makefile](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/Makefile)  |
| [ft_calloc.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_calloc.c)  | [ft_putendl_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putendl_fd.c)  | [ft_lstclear.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstclear.c)  |
| [ft_isalnum.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isalnum.c) | [ft_putnbr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putnbr_fd.c)  | [ft_lstdelone.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstdelone.c)  |
| [ft_isalpha.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isalpha.c)  | [ft_putstr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_putstr_fd.c)  | [ft_lstiter.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstiter.c)  |
| [ft_isascii.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isascii.c)  | [ft_split.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_split.c)  | [ft_lstlast.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstlast.c)  |
| [ft_isdigit.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isdigit.c)  | [ft_striteri.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_striteri.c)  | [ft_lstmap.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstmap.c)  |
| [ft_isprint.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_isprint.c)  | [ft_strjoin.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strjoin.c)  | [ft_lstnew.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstnew.c)  |
| [ft_memchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memchr.c)  | [ft_strmapi.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strmapi.c)  | [ft_lstsize.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_lstsize.c)  |
| [ft_memcmp.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memcmp.c)  | [ft_strtrim.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strtrim.c)  |
| [ft_memcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memcpy.c) | [ft_substr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_substr.c)  |
| [ft_memmove.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memmove.c)  |
| [ft_memset.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_memset.c) |
| [ft_strchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strchr.c)  |
| [ft_strdup.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strdup.c)  |
| [ft_strlcat.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlcat.c)  |
| [ft_strlcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlcpy.c)  |
| [ft_strlen.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strlen.c)  |
| [ft_strncmp.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strncmp.c)  |
| [ft_strnstr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strnstr.c)  |
| [ft_strrchr.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_strrchr.c)  |
| [ft_tolower.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_tolower.c)  |
| [ft_toupper.c](https://github.com/f-corvaro/42.common_core/blob/main/00-libft/libft/ft_toupper.c)  |

</p>
<br>

## 5 - Running Tests

<p align="justify">
To run tests, run the following command: </p>

<p align="justify"> This command is used to run the makefile with the rules and dependencies that we develop. In this project make will compile and give to us `.o` files from `.c` sources. </p>

```bash
  make
```

<p align="justify"> This command will remove all `.o` files from our directory. </p>

```bash
  make clean
```

<p align="justify"> This command will remove all `.o` files from our directory and remove the `.a` file. </p>

```bash
  make fclean
```

<p align="justify"> This command will do the `fclean` and will do the make again. </p>

```bash
  make re
```
 <a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img align="center" alt="running test" width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/make.gif">
</p>
<br>

## 6 - Evaluation

### 6.1 - Tester

<p align="justify"> To test my project before to push into the intra, I used the: </p>

[Supreme Tester](https://github.com/FranFrau/Supreme-Tester-Libft) of [@FranFrau]( https://github.com/FranFrau )

### 6.2 - Correction Sheet

<a href="https://github.com/f-corvaro/42.common_core/tree/main/00-libft"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/libft_cs.png">

### 6.3 - Moulinette Result

 <a href="https://projects.intra.42.fr/projects/42cursus-libft/projects_users/3049229">
  <img align="center" img src="https://github.com/f-corvaro/42.common_core/blob/main/00-libft/.extra/moulinette_libft.png">
 </a>
</p>
<br>

## 7 - Special Thanks

[@dieremy]( https://github.com/dieremy ) <p align="justify">  helped me to test and resolve leaks in my functions. Furthermore, he introduced to me this project: explaining to me some functions and some theory about it. </p>
[@MirkokriM]( https://github.com/MirkokriM ) <p align="justify"> for the gif idea.</p>
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

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
