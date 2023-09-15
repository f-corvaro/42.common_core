# **GET_NEXT_LINE**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/get_next_line"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/get_next_line_intra.png">

<p align="justify">

v10 | v12
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject(new).pdf)


</p>

## 0 - About

<p align="justify">
The purpose of the get_next_line function is to write a function that returns a line read from a file descriptor - fd. Is a very important function that will help us in the future, so we will adding this new one function to the our library. The concept to understand for this project is about the static variables and the use of file descriptor. Is forbidden to use global variables, to use libft function and lseek(). The function should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. All heap allocated memory space must be properly freed when necessary. The repeated calls, e.g. using a loop, to our get_next_line function should let us read the text file pointed to the file descriptor, one line at a time
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

## 1 - To figure out
<p align="justify">

**Memory layout of C programs:** typically is divided in these sections.

Text segment  (i.e. instructions) -> Initialized data segment-> Uninitialized data segment  (bss) -> Heap -> Stack.

<img width="350" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/C-memory.png">

***Text Segment:*** Is one of the sections of a program in an object file or in memory, which contains executable instructions. As a memory region, a text segment may be placed below the heap or stack in order to prevent heaps and stack overflows from overwriting it. Usually, the text segment is sharable so that only a single copy needs to be in memory for frequently executed programs, such as text editors, the C compiler, the shells, and so on. Also, the text segment is often read-only, to prevent a program from accidentally modifying its instructions

***Initialized Data Segment:*** A data segment is a portion of the virtual address space of a program, which contains the global variables and static variables that are initialized by the programmer.
Note that, the data segment is not read-only, since the values of the variables can be altered at run time.
This segment can be further classified into the initialized read-only area and the initialized read-write area.

***Uninitialized Data Segment:*** called also the “bss” segment. Data in this segment is initialized by the kernel to arithmetic 0 before the program starts executing uninitialized data starts at the end of the data segment and contains all global variables and static variables that are initialized to zero or do not have explicit initialization in source code. For instance, a variable declared static int i; would be contained in the BSS segment. For instance, a global variable declared int j; would be contained in the BSS segment

<br>

**Static variables:** have the properties of preserving their value after they are out of their scope and makes the variable retain its value among multiple calls. A static int variable remains in memory while the program is running. A normal variable is destroyed when a function call where the variable was declared is over (e.g. the static int is used to count the number of times a function is called). Static variables are allocated memory in the data segment, not the stack segment.
</p>

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

[![Static variable](https://www.geeksforgeeks.org/static-variables-in-c/)]

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
