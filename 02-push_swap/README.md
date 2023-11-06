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

The purpose of this project is to write a program named ```push_swap``` that takes as an argument the stack a formatted as a list of integers. So, this project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

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

</p>p: The least amount of moves with two stacks
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

• Instructions must be separated by a ```\n``` and nothing else.

• The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.

• If no parameters are specified, the program must not display anything and give the
prompt back.

• In case of error, it must display ```"Error"``` followed by a ```’\n’``` on the standard error.
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

**Example** <p align="justify">

<a href="https://github.com/f-corvaro/42.common_core/tree/main/02-push_swap"><img width="450" src="https://github.com/f-corvaro/42.common_core/blob/main/02-push_swap/.extra/example.png">

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

**What is an algorithm?**
<p align="justify">

An algorithm is just a term for a set of instructions of what a program should do, and how it should do it.

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

**

</p>

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

**What is a binary search?**
<p align="justify">

Binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array. Binary search runs in logarithmic time in the worst case, making O(log(n)) comparisons, where n is the number of elements in the array. Binary search is faster than linear search except for small arrays. However, the array must be sorted first to be able to apply binary search. There are specialized data structures designed for fast searching, such as hash tables, that can be searched more efficiently than binary search. However, binary search can be used to solve a wider range of problems, such as finding the next-smallest or next-largest element in the array relative to the target even if it is absent from the array.

</p>

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

**What are sorting algorithms?**
<p align="justify">

Basically, sorting algorithms are ways to organize an array of items from smallest to largest. To analize the algorithm complexity and efficiency is needed to understand the Big O notation (O(n)). The most common algorithms for sorting are:

1. ***Straight Insertion Sort:***

<a href="https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/#:~:text=%2B1%5D%20%3D%20temp-,Quicksort,greater%20numbers%20on%20the%20right."><img src="https://lamfo-unb.github.io/img/Sorting-algorithms/Insertion-sort-example-300px.gif">

Straight insertion sort is a simple sorting algorithm that works by repeatedly inserting an element into a sorted sequence. It is a stable algorithm, meaning that it preserves the original order of equal elements in the input array. Straight insertion sort is a simple and efficient algorithm for sorting small arrays. However, it is not as efficient for sorting large arrays. The worst-case time complexity of straight insertion sort is O(n^2), which means that the sorting time increases quadratically with the size of the input array. Straight insertion sort is often used in embedded systems and other applications where memory is limited. It is also used in sorting algorithms that are more complex, such as merge sort and quicksort.

2. ***Shell Sort:***

<a href="https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/#:~:text=%2B1%5D%20%3D%20temp-,Quicksort,greater%20numbers%20on%20the%20right."><img src="https://lamfo-unb.github.io/img/Sorting-algorithms/Shell_Sort_Algorithm.gif">



3. ***Shell Sort:***
4. ***Shell Sort:***
5. ***Shell Sort:***
6. ***Shell Sort:***
7. ***Shell Sort:***
8. ***Shell Sort:***
9. ***Shell Sort:***
10. ***Shell Sort:***
<br>

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

- [Analysis of algorithms](https://en.wikipedia.org/wiki/Analysis_of_algorithms)

- [Stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

- [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

- [Push_swap](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)

- [Linked Lists](https://www.learn-c.org/en/Linked_lists)

- [sorting](https://medium.com/basecs/sorting-out-the-basics-behind-sorting-algorithms-b0a032873add)

- [Sorting algorithms](https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/#:~:text=%2B1%5D%20%3D%20temp-,Quicksort,greater%20numbers%20on%20the%20right.)

- [pivot_quick_sort](https://medium.com/basecs/pivoting-to-understand-quicksort-part-2-30161aefe1d3)

<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
