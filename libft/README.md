# **LIBFT** [![fcorvaro's 42 Libft Score](https://badge42.vercel.app/api/v2/clftrr31n000608jvhnng5zld/project/3049229)](https://profile.intra.42.fr/users/fcorvaro)

<a href="https://github.com/f-corvaro/42.common_core/tree/main/libft"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/libft/.extra/libft.png">

## Outcome

[![subject](https://img.shields.io/badge/subject-libft-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/libft/.extra/en.subject.pdf)

## Index

0. [About](#0---about)
    
1. [What's in it?](#1---what_s-in-it-)
   
2. [Type of files](#2---type-of-files)

3. [Things new to understand](#3---things-new-to-understand)

4. [Functions Index](#4---functions-index)
    
5. [Running Tests](#5---running-tests)
    
6. [Evaluation](#6---evaluation)

    6.1 [Tester](#61---tester)
    
    6.2 [Correction Sheet](#62---correction-sheet)
    
    6.3 [Moulinette Result](#63---moulinette-result)

7. [Special Thanks](#7---special-thanks)
    
[LICENSE](#license)
  
## 0 - About
<p align="justify">
C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. The purpose of the project is to re-code some libc functions and other common utility functions to be reused in the subsequent 42 projects. In this project there is norminette and moulinette. All explanation of the coding are into the code as a comments.
</p>

## 1 - What's in it?
<p align="justify">
There are 4 sections:

1. **Libc Functions:** Some of the standard C functions;
2. **Additional Functions:** Functions that will be useful for other projects;
3. **Bonus Functions:** Functions that will be useful for linked list manipulation;
4. **Other:** makefile and libft.h.
</p>

## 2 - Type of files:
<p align="justify">

**.c - source code file:**
Where all the "instruction" are written.

**.h - header:**
Useful because insteade of doing `#include <library.h>` for all c files, you will write only once in your header. In advance you can reuse the function you did in your library for other functions in your library. For example in `ft_bzero.c` I use the `ft_memset.c`. Obviousbly you need to add `#include <libft.h>` at the top of all your files .c.

**makefile:**
Is a file where you compile your projects, instead of use an `int main` and `gcc` to compile, you will use this file. You have some commands to write in the console to compile (see below "Running Tests") that you write. A makefile consists of a set of dependencies and rules. A dependency has a target (a file to be created) and a set of source files upon which it is dependent. The rules describe how to create the target from the dependent files. Typically, the target is a single executable file. In this project we want to create a `.o` files. The makefile is read by the `make` command, which determines the target file or files that are to be made and then compares the dates and times of the source files to decide which rules need to be invoked to construct the target. Often, other intermediate targets have to be created before the final target can be made. The make command uses the makefile to determine the order in which the targets have to be made and the correct sequence of rules to invoke.

**.o - object:**
The `.o` suffix is the object code. GCC and other compilers actually run through several steps when compiling.

1. Pre-processor. This resolves your #define and #include and other #... macros. This step is rarely output to a file - it's almost universally passed directly into the next step.

2. Object compilation. The lines of code are transformed into machine code and symbol tables. The symbol tables are not yet linked into an executable. For larger programs, this is an intermediate output when you are compiling multiple files which may have dependencies on one another.

3. Linking. The symbols in the object code are now resolved to the actual memory locations or call points to provide a fully fledged executable.

In reality it's just a precompiled version of a source file.

**.a - archive libraries:**
Archive libraries (.a) are statically linked. The library will remain unchanged unless the program is recompiled. This is the most straight forward way of using a library as the final result is a simple executable with no dependencies.
</p>


## 3 - Things new to understand
<p align="justify">

**malloc:** ```malloc()``` allocates memory of a requested size and returns a pointer to the beginning of the allocated block. To hold this returned pointer, we must create a variable. The pointer should be of same type used in the malloc statement.
C does not know the data type it is allocating memory for; so we use ```sizeof()``` to allocate the right amount of memory for that data type.

```
char    *arr;

arr = (char *)malloc(sizeof(char) * 10)
```

This statement used malloc to set aside memory for an array of 10 char. As sizes can change between computers, it’s important to use the ```sizeof()``` function to calculate the size on the current computer. Any memory allocated during the program’s execution will need to be freed before the program closes. To free memory, we can use the ```free()``` function

```
free(arr);
```

This statement will deallocate the memory previously allocated. C does not come with a garbage collector; as a result, memory not properly freed will continue to be allocated after the program is closed. ```malloc()``` is used for:
1. dynamic memory allocation and is useful when you don’t know the amount of memory needed during compile time;
2. Allocating memory allows objects to exist beyond the scope of the current block.
3. C passes by value instead of reference. Using malloc to assign memory, and then pass the pointer to another function, is more efficient than having the function recreate the structure.


**linked lists:**

Like arrays, a linked list is a linear data structure. Linked list elements are not stored at a contiguous location; the elements are linked using pointers. They include a series of connected nodes. Here, each node stores the data and the address of the next node.

</p>
    
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/libft/.extra/lle.png">

<p align="justify">
Arrays can be used to store linear data of similar types, but arrays have some limitations:

1. The size of the arrays is fixed;
2. Insertion of a new element / Deletion of a existing element in an array of elements is expensive.

The advantages of linked lists over arrays are:

1. Dynamic Array.
2. Ease of Insertion/Deletion.
3. Insertion at the beginning is a constant time operation and takes O(1) time, as compared to arrays where inserting an element at the beginning takes O(n) time,where n is the number of elements in the array.

Drawbacks of Linked Lists:

1. Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do a binary search with linked lists efficiently with its default implementation.
2. Extra memory space for a pointer is required with each element of the list.
3. It takes a lot of time in traversing and changing the pointers.
4. Reverse traversing is not possible in singly linked lists.
5. It will be confusing when we work with pointers.
6. Direct access to an element is not possible in a linked list as in an array by index.
7. Searching for an element is costly and requires O(n) time complexity.
8. Sorting of linked lists is very complex and costly.
9. Appending an element to a linked list is a costly operation, and takes O(n) time, where n is the number of elements in the linked list, as compared to arrays that take O(1) time.
10. Not cache-friendly. Since array elements are contiguous locations, there is the locality of reference which is not there in the case of linked lists.

Types of Linked Lists:

1. Simple Linked List – In this type of linked list, one can move or traverse the linked list in only one direction. where the next pointer of each node points to other nodes but the next pointer of the last node points to NULL. It is also called “Singly Linked List”.

2. Doubly Linked List – In this type of linked list, one can move or traverse the linked list in both directions (Forward and Backward).

3. Circular Linked List – In this type of linked list, the last node of the linked list contains the link of the first/head node of the linked list in its next pointer.

4. Doubly Circular Linked List – A Doubly Circular linked list or a circular two-way linked list is a more complex type of linked list that contains a pointer to the next as well as the previous node in the sequence. The difference between the doubly linked and circular doubly list is the same as that between a singly linked list and a circular linked list. The circular doubly linked list does not contain null in the previous field of the first node.

5. Header Linked List – A header linked list is a special type of linked list that contains a header node at the beginning of the list.

The basic operations on linked list are deletion, insertion, search and display. A linked list is represented by a pointer to the first node of the linked list. The first node is called the head of the linked list. If the linked list is empty, then the value of the head points to NULL. Each node in a list consists of at least two parts:

1. A Data Item (we can store integers, strings, or any type of data).

2. Pointer (Or Reference) to the next node (connects one node to another) or An address of another node.

In C, we can represent a node using structures.

```
struct Node {
    int data;
    struct Node* next;
};
```

</p>

## 4 - Functions Index

<p align="center">


| Libc functions  | Additional functions | Bonus part |  other |
| ------------- | ------------- | ------------- |  ------------- |
| [ft_atoi.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_atoi.c)| [ft_itoa.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_itoa.c)  | [ft_lstadd_back.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstadd_back.c)  | [libft.h](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/libft.h) |
| [ft_bzero.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_bzero.c) | [ft_putchar_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_putchar_fd.c)  | [ft_lstadd_front.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstadd_front.c)  | [makefile](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/Makefile)  |
| [ft_calloc.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_calloc.c)  | [ft_putendl_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_putendl_fd.c)  | [ft_lstclear.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstclear.c)  |
| [ft_isalnum.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_isalnum.c) | [ft_putnbr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_putnbr_fd.c)  | [ft_lstdelone.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstdelone.c)  |
| [ft_isalpha.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_isalpha.c)  | [ft_putstr_fd.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_putstr_fd.c)  | [ft_lstiter.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstiter.c)  |
| [ft_isascii.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_isascii.c)  | [ft_split.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_split.c)  | [ft_lstlast.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstlast.c)  |
| [ft_isdigit.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_isdigit.c)  | [ft_striteri.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_striteri.c)  | [ft_lstmap.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstmap.c)  |
| [ft_isprint.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_isprint.c)  | [ft_strjoin.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strjoin.c)  | [ft_lstnew.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstnew.c)  |
| [ft_memchr.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_memchr.c)  | [ft_strmapi.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strmapi.c)  | [ft_lstsize.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_lstsize.c)  |
| [ft_memcmp.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_memcmp.c)  | [ft_strtrim.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strtrim.c)  |
| [ft_memcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_memcpy.c) | [ft_substr.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_substr.c)  |
| [ft_memmove.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_memmove.c)  |
| [ft_memset.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_memset.c) |
| [ft_strchr.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strchr.c)  |
| [ft_strdup.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strdup.c)  |
| [ft_strlcat.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strlcat.c)  |
| [ft_strlcpy.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strlcpy.c)  |
| [ft_strlen.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strlen.c)  |
| [ft_strncmp.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strncmp.c)  |
| [ft_strnstr.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strnstr.c)  |
| [ft_strrchr.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_strrchr.c)  |
| [ft_tolower.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_tolower.c)  |
| [ft_toupper.c](https://github.com/f-corvaro/42.common_core/blob/main/libft/libft/ft_toupper.c)  |

</p>

## 5 - Running Tests

<p align="justify">
To run tests, run the following command:

This command is used to run the makefile with the rules and dependencies that we develop. In this project make will compile and give to us `.o` files from `.c` sources.

```bash
  make
```

This command will remove all `.o` files from our directory.

```bash
  make clean
```

This command will remove all `.o` files from our directory and remove the `.a` file.

```bash
  make fclean
```

This command will do the `fclean` and will do the make again.

```bash
  make re
```

</p>

## 6 - Evaluation

### 6.1 - Tester
    
### 6.2 - Correction Sheet

### 6.3 - Moulinette Result
    
<p align="justify">
<img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/libft/.extra/moulinette_libft.png">

</p>

## 7 - Special Thanks
<p align="justify">
    
[@dieremy]( https://github.com/dieremy ) helped me to test and resolve leaks in my functions. Furthermore, he introduced to me this project: explaining to me some functions and some theory about it.

</p>

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
