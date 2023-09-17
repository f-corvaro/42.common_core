# **GET_NEXT_LINE**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/get_next_line"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/get_next_line_intra.png">

<p align="justify">

v10 | v12
:-------------------------:|:-------------------------:
[![subject-old](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject.pdf) | [![subject-new](https://img.shields.io/badge/subject-get_next_line-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/en.subject(new).pdf)


</p>
<br>

### Index

<br>

## About

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

## Evaluation

### Tester

<br>

### Correction sheet

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs1.png">

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs2.png">

<a href="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line"><img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/get_next_line/.extra/cs3.png">

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

## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
