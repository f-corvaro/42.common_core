# **PUSH SWAP**

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/ps.png">

<p align="justify">

[![subject](https://img.shields.io/badge/subject-push_swap-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/en.subject.pdf)

</p>
<br>

### Index

- [**PUSH SWAP**](#push-swap)
    - [Index](#index)
  - [Folder Structure](#folder-structure)
  - [About](#about)
  - [The rules](#the-rules)
  - [Resources Given](#resources-given)
  - [Bonus Part](#bonus-part)
  - [What do I need to know?](#what-do-i-need-to-know)
  - [How can I organize the "first real hard project"?](#how-can-i-organize-the-first-real-hard-project)
  - [Running Tests](#running-tests)
    - [Leaks test](#leaks-test)
    - [Graphical User Interface - GUI (Usefull for testing purposes)](#graphical-user-interface---gui-usefull-for-testing-purposes)
      - [How to use?](#how-to-use)
    - [Testing](#testing)
    - [Tester](#tester)
  - [Evaluation](#evaluation)
    - [Correction sheet](#correction-sheet)
  - [Treasure hunt](#treasure-hunt)
  - [Support Me](#support-me)
  - [Skills developed](#skills-developed)
  - [Sources](#sources)
  - [License](#license)



<br>

## Folder Structure

<p align="justify">

```
.
├── push_swap
│   ├── include
│   │   └── push_swap.h
│   ├── lib
│   ├── srcs
│   │   ├── ft_error_handling.c
│   │   ├── ft_free.c
│   │   ├── ft_id_stack_a.c
│   │   ├── ft_id_stack_b.c
│   │   ├── ft_init_op.c
│   │   ├── ft_input_preparation.c
│   │   ├── ft_op_p.c
│   │   ├── ft_op_r.c
│   │   ├── ft_op_rr.c
│   │   ├── ft_op_s.c
│   │   ├── ft_stack_calc_a.c
│   │   ├── ft_stack_calc_b.c
│   │   ├── ft_stack_calc.c
│   │   ├── ft_stack_half_opa.c
│   │   ├── ft_stack_half_opb.c
│   │   ├── ft_stack_op.c
│   │   ├── ft_stack_searching_op.c
│   │   ├── ft_stack_sorting.c
│   │   ├── ft_utils.c
│   │   └── main.c
│   ├── srcs_b
│   │   ├── ft_checker.c
│   │   └── main.c
│   └── Makefile
├── resources_given
│   ├── checker_linux
│   └── checker_Mac
└── README.md
```

<br>

## About

<p align="justify">

The purpose of this project is to write a program named ```push_swap``` that takes as an argument the stack a formatted as a list of integers. The purpose of this project is to sort the list of integers stored in stack A using a limited set of instructions and another stack called B. To score the maximum you need to use the lowest possible number of actions, is setted a maximum number of moves. There are many ways to manipulate this stack implementing different algorithms.

<p>
<br>

**Some rules to keep in mind:**

<p align="justify">

• Your project must be written in C (in accordance with the Norm).

• Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors.

• All heap allocated memory space must be properly freed when necessary.

• You must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink. And the Makefile must at least contain the rules ```$(NAME), all, clean, fclean and re (bonus if you want maximum score)```.

• If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.

•Global variables are forbidden.

<p>
<br>

**Program name:**

<p align="justify">

```push_swap``` Which has as arguments a stack A (a list of integers).

</p>
<br>

**Files to turn in:**

<p align="justify">

```Makefile, *.h, *.c```

</p>
<br>

**External functs. allowed:**

<p align="justify">

Libft authorized, and:

```
1. read, write, malloc, free, exit

2. ft_printf and any equivalent YOU coded
```

</p>
<br>

**Goal:**

<p align="justify">

The goal is to sort the stack with the lowest possible number of operations. During the evaluation process, the number of instructions found by your program will be compared against a limit:

```
required: sort   3 numbers with <=     3 operations
required: sort   5 numbers with <=    12 operations
scored:   sort 100 numbers with <=   700 operations   max score
                                     900 operations
                                    1100 operations
                                    1300 operations
                                    1500 operations   min score
scored:   sort 500 numbers with <=  5500 operations   max score
                                    7000 operations
                                    8500 operations
                                   10000 operations
                                   11500 operations   min score
```

<p>
<br>


**Requirements:**

<p align="justify">

• The first argument should be at the top of the stack.

• Instructions must be separated by a ```\n``` and nothing else.

• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.

• If no parameters are specified, the program must not display anything and give the prompt back.

• In case of error, it must display ```"Error"``` followed by a ```’\n’``` on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer (MAXINT) and/or there are duplicates.

<br>

***Examples:***

```shell
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
$>
```

If the program checker_OS displays "KO", it means that your push_swap came up
with a list of instructions that doesn’t sort the numbers.

Where the command ARG="4 67 3 87 23" initializes a variable and assigns the string "4 67 3 87 23" to it. The string contains a sequence of space-separated numbers: 4, 67, 3, 87, and 23. These numbers represent the unsorted list of integers that will be passed to the push_swap program. The ARG variable acts as a placeholder for the unsorted list of integers. It's used later in the command to pass the list to the push_swap program.


The push_swap program takes the unsorted list of integers as input and processes it using its sorting algorithm. It generates a list of instructions that describe the steps required to sort the list.

So, a pipe ```|``` is used to connect the output of the push_swap program to the input of the ```wc -l``` command. Each instruction generated from push_swap program represents a separate line. The word count command with the flag -l counts the number of lines in its input, so it will count the number of instructions generated by the push_swap program.


<p>
<br>

## The rules

<p align="justify">

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

<br>

**Example**

<p align="justify">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="450" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/example.png">

<p>
<br>

## Resources Given

<p align="justify">

Are provided two programms named checker: one developed for linux and one for mac. You can download it from [here](https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/resources_given). To use correctly the executables, you need to modify the permissions of these. Run ```chmod 777 "name of the executable"```.

<p>
<br>

## Bonus Part

<p align="justify">

The request of the bonus is regarding the checker, in particular is requested to create your own checker. This checker takes as an argument the stack A formatted as a list of integers. The first argument should be at the top of the stack (be careful
about the order). If no argument is given, it stops and displays nothing. It will then wait and read instructions on the standard input, each instruction will
be followed by ’\n’. Once all the instructions have been read, the program has to
execute them on the stack received as an argument. What does it do?

•If after executing those instructions, the stack a is actually sorted and the stack b
is empty, then the program must display "OK" followed by a ’\n’ on the standard
output.

•In every other case, it must display "KO" followed by a ’\n’ on the standard output.

•In case of error, you must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments are not integers, some arguments are bigger than an integer, there are duplicates, an instruction doesn’t exist and/or
is incorrectly formatted.

```shell
$>./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
$>./checker 3 2 1 0
sa
rra
pb
KO
$>./checker 3 2 one 0
Error
$>./checker "" 1
Error
$>
```

You DO NOT have to reproduce the exact same behavior as the provided
binary. It is mandatory to manage errors but it is up to you to
decide how you want to parse the arguments.

<p>

**Program name:**

<p align="justify">

```checker``` Which has as arguments a stack A (a list of integers).

<p>
<br>

**Files to turn in:**

<p align="justify">

```*.h, *.c```

</p>
<br>

**External functs. allowed:**

<p align="justify">

Libft authorized, and:

```
1. read, write, malloc, free, exit

2. ft_printf and any equivalent YOU coded
```

</p>
<br>

## What do I need to know?

<p align="justify">

**What is an algorithm?**

<p align="justify">

An algorithm is just a term for a set of instructions of what a program should do, and how it should do it.

<br>

**What does analysis of algorithms mean in Computer science?**

The analysis of algorithms is the process of finding the computational complexity of algorithms, which means the amount of time, storage, or other resources needed to execute them. It is an important part of computer science, as it allows us to compare different algorithms and choose the most efficient one for a given problem.

There are two main ways to analyze algorithms:

• ***Asymptotic analysis:*** considers the behavior of an algorithm as the size of the input grows to infinity. It is the most common type of algorithm analysis, and it uses asymptotic notations such as big O, big Omega, and big Theta to express the algorithm's time and space complexity. In the binary search, it is said to run in a number of steps proportional to the logarithm of the size n of the sorted list being searched, or in O(log n), colloquially "in logarithmic time".

• ***Empirical analysis:*** measures the actual performance of an algorithm on a specific set of inputs. It is less common than asymptotic analysis, but it can be useful for comparing different implementations of the same algorithm or for optimizing an algorithm for a specific problem.


Here are some of the key factors that are considered when analyzing algorithms:

• ***Time complexity:*** The amount of time required by an algorithm to execute as a function of the size of the input.

• ***Space complexity/memory usage:*** The amount of memory required by an algorithm to execute as a function of the size of the input. The space complexity could be classified in-place algorithms or out-of-place algorithms. An ***in-place algorithm*** is one that operates directly on the inputted data. The danger with this is that the data is getting completely transformed in the process of transforming it, which means that the original dataset is effectively being destroyed! However, it is more space-efficient, because the algorithm only needs a tiny bit of extra space in memory — usually a constant amount of space, or O(1) — which can be helpful if you don’t have enough memory to spare. ***out-of-place algorithms*** don’t operate directly on the original dataset; instead, the make a new copy, and perform the sorting on the copied data. This can be safer, but the drawback is that the algorithm’s memory usage grows with input size.

• ***Accuracy:*** How accurately the algorithm solves the problem.

• ***Robustness:*** How well the algorithm handles unexpected inputs or errors.

• ***Parallelizability:*** Whether the algorithm can be parallelized to improve its performance.

The program's runtime is directly proportional to its input size. Doubling the input size doubles the runtime; quadrupling the input size quadruples the run-time; and so forth. The time complexity of the linear search algorithm is O(n), where n is the number of elements in the array.

</p>
<br>

**What is a stack?**

<p align="justify">

A stack is an abstract data type that serves as a collection of elements, with two main operations:

1. ***Push***, which adds an element to the collection.
2. ***Pop***, which removes the most recently added element that was not yet removed.

Additionally, a ***peek*** operation can, without modifying the stack, return the value of the last element added. Calling this structure a stack is by analogy to a set of physical items stacked one atop another, such as a stack of plates.


The order in which an element added to or removed from a stack is described as last in, first out, referred to by the acronym ***LIFO***.


Considered as a linear data structure, or more abstractly a sequential collection, the push and pop operations occur only at one end of the structure, referred to as the top of the stack. This data structure makes it possible to implement a stack as a singly linked list and as a pointer to the top element. A stack may be implemented to have a bounded capacity. If the stack is full and does not contain enough space to accept another element, the stack is in a state of ***stack overflow***. A stack can be easily implemented either through an array or a linked list, as stacks are just special cases of lists.
For example, A stack is needed to implement depth-first search (is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking. Extra memory, usually a stack, is needed to keep track of the nodes discovered so far along a specified branch which helps in backtracking of the graph).

</p>
<br>

**What is a binary search?**

<p align="justify">

Binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array. Binary search runs in logarithmic time in the worst case, making O(log(n)) comparisons, where n is the number of elements in the array. Binary search is faster than linear search except for small arrays. However, the array must be sorted first to be able to apply binary search. There are specialized data structures designed for fast searching, such as hash tables, that can be searched more efficiently than binary search. However, binary search can be used to solve a wider range of problems, such as finding the next-smallest or next-largest element in the array relative to the target even if it is absent from the array.

</p>
<br>

**Which are the differences between stable and unstable algorithm?**

<p align="justify">

A stable sorting algorithm is one that preserves the relative order of equal elements in the input sequence. An unstable sorting algorithm is one that does not preserve the relative order of equal elements. In other words, if you have a list of elements with duplicate values, and you sort the list using a stable sorting algorithm, the duplicate values will remain in the same order relative to each other after the sort. However, if you sort the list using an unstable sorting algorithm, the duplicate values may be rearranged in any order. Stability is important in some cases, such as when sorting a list of key-value pairs, where the key is the sort key and the value is some other data associated with the key. For example, you might have a list of employee names and their salaries, where the name is the sort key and the salary is the value. If you sort this list using a stable sorting algorithm, the employees with the same name will remain in the same order after the sort. This can be useful for maintaining the original order of the data.

Examples of stable sorting algorithms:

•Merge sort

•Insertion sort

•Bubble sort

•Binary tree sort

Examples of unstable sorting algorithms:

•Quicksort

•Heap sort

•Selection sort


</p>
<br>

**What are sorting algorithms?**

<p align="justify">

Basically, sorting algorithms are ways to organize an array of items from smallest to largest. To analize the algorithm complexity and efficiency is needed to understand the Big O notation (O(n)). The most common algorithms for sorting are:

<a href="https://www.crio.do/blog/top-10-sorting-algorithms/"><img src="https://www.crio.do/blog/content/images/2022/01/Top-10-Sorting-Algorithms-You-Need-To-Know.png">


<br>

## How can I organize the "first real hard project"?

<p align="justify">

Firstly, you need to understand what this program should do. You need to study all the theory that you need and understand which algorithm you want to implement in your code. Secondly, you need to do a pattern to understand how to divide this project into many smaller ones. So, don't panic. I will show you my organization pattern:

<a href="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/Push_Swap.png"><img src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/Push_Swap.png">

## Running Tests

<p align="justify">

My project is based on brute force sorting algorithm. I have done mandatory and bonus part, I have implemented for all functions a comment that explains what does it do.
I have tested my project with several tests and the result is that my Push_Swap is under the maximum number of moves allowed.
To generate a set of random numbers I have used this python script:

```py
import random
numbers = random.sample(range(-1000, 1000), 500)
random.shuffle(numbers)
print(' '.join(map(str, numbers)))
```

used on this [website](https://www.online-python.com/).

### Leaks test

To check is the memory is freed correctly, so to check if there are some leaks, run this tests:

Ubuntu: ```valgrind --leak-check=full ./your_program```

MacOS: ```leaks -atExit -- ./your_program```


### Graphical User Interface - GUI (Usefull for testing purposes)

<p align="justify">

I visualized my stacks with this [push-swap-gui 1.1](https://pypi.org/project/push-swap-gui/) wrote in Python. This is a python3 package added to PyPI. To run this, you need to run in the terminal the command: ```push_swap_gui``` in your push_swap folder. Before to use you need to install if you don't have it. ```pip3 install push_swap_gui```.

If you noticed an error like this:

```shell
    ERROR: Command errored out with exit status 1:
     command: /usr/bin/python3 -c 'import sys, setuptools, tokenize; sys.argv[0] = '"'"'/tmp/pip-install-amjzzxzo/pyttk/setup.py'"'"'; __file__='"'"'/tmp/pip-install-amjzzxzo/pyttk/setup.py'"'"';f=getattr(tokenize, '"'"'open'"'"', open)(__file__);code=f.read().replace('"'"'\r\n'"'"', '"'"'\n'"'"');f.close();exec(compile(code, __file__, '"'"'exec'"'"'))' egg_info --egg-base /tmp/pip-install-amjzzxzo/pyttk/pip-egg-info
         cwd: /tmp/pip-install-amjzzxzo/pyttk/
    Complete output (7 lines):
    Traceback (most recent call last):
      File "<string>", line 1, in <module>
      File "/tmp/pip-install-amjzzxzo/pyttk/setup.py", line 2, in <module>
        import ttk
      File "/tmp/pip-install-amjzzxzo/pyttk/ttk.py", line 36, in <module>
        import tkinter as Tkinter
    ModuleNotFoundError: No module named 'tkinter'
    ----------------------------------------
ERROR: Command errored out with exit status 1: python setup.py egg_info Check the logs for full command output.
```

You need to install Tkinter, which is the standard GUI library for Python. Python when combined with Tkinter provides a fast and easy way to create GUI applications. Tkinter provides a powerful object-oriented interface to the Tk GUI toolkit. To install this on Linux, run the command:
```sudo apt-get install python3-tk```.

#### How to use?

You need to select a range of numbers (remember that 0 counts as 1) and generate stack A. You need to uncheck the square flag and select the path of your push_swap. After that, you must calculate the number of moves and click on the play button to view the visualizer's moves (remember that you can control the speed).

### Testing

<p align="justify">

1. Run ```norminette -R CheckForbiddenSourceHeader``` into the push_swap dir to get a norm check of your work.
2. Tests about the command requested with make.
3. Leaks tests.
4. Errors management.
5. Push_swap tests.
6. Checker tests.

### Tester

[Push_Swap Tester](https://github.com/Aldisti/push_swap-tester) of [Aldisti](https://github.com/Aldisti).

</p>




## Evaluation

Test the notable cases: 0, 1, 3, 5, 50, 100, 250 and 500 and iterate many times to understand the efficiency.

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
Remember to ⭐ the repository.
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

- [Analysis of algorithms](https://en.wikipedia.org/wiki/Analysis_of_algorithms)

- [Stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

- [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

- [Push_swap](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)

- [Linked Lists](https://www.learn-c.org/en/Linked_lists)

- [sorting](https://medium.com/basecs/sorting-out-the-basics-behind-sorting-algorithms-b0a032873add)

- [Sorting algorithms 1](https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/#:~:text=%2B1%5D%20%3D%20temp-,Quicksort,greater%20numbers%20on%20the%20right.)

- [Sorting algorithms 2](https://www.crio.do/blog/top-10-sorting-algorithms/)

- [pivot_quick_sort](https://medium.com/basecs/pivoting-to-understand-quicksort-part-2-30161aefe1d3)

- [Push Swap — A journey to find most efficient sorting algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

- [Fastest Push_Swap Algorithm](https://zainab-dnaya.medium.com/fastest-push-swap-algorithm-2f510028602b)
<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
