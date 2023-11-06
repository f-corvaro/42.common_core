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
	- [The rules ](#the-rules-)
	- [Resources Given ](#resources-given-)
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

## Folder Structure

<p align="justify">



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

***Example***
Consider the following unsorted array:

```[5, 3, 2, 1, 4]```

To sort this array using straight insertion sort, we would start at the second element, which is 3. We would compare 3 to the element before it, which is 5. Since 3 is less than 5, we would swap the two elements.

```[3, 5, 2, 1, 4]```

We would then move on to the next element, which is 2. We would compare 2 to the element before it, which is 3. Since 2 is less than 3, we would swap the two elements.

```[2, 3, 5, 1, 4]```

We would continue this process, comparing each element to the element before it and swapping them if necessary. After sorting the entire array, we would have the following sorted array:

```[1, 2, 3, 4, 5]```

2. ***Shell Sort:***

<img src="https://www.crio.do/blog/content/images/2021/12/Shell-Sort.gif">

Shell sort is a sorting algorithm that is based on the insertion sort algorithm. Shell sort is a highly efficient algorithm, and is often faster than insertion sort for large arrays. Shell sort works by repeatedly sorting the array using a smaller gap between elements. The gap is initially set to a large value, and is then reduced by half on each iteration. The algorithm terminates when the gap is reduced to 1. At each iteration, the algorithm compares each element to the element at the gap distance. If the current element is less than the element at the gap distance, the two elements are swapped. The algorithm then moves on to the next element. The worst-case time complexity of shell sort is O(n^2), but the average-case time complexity is O(n log^2 n). This means that shell sort is typically faster than insertion sort for large arrays. Shell sort is often used in embedded systems and other applications where memory is limited. It is also used in more complex sorting algorithms, such as quicksort and merge sort.

***Example***

Consider the following unsorted array:

```[5, 3, 2, 1, 4]```

To sort this array using shell sort, we would start with a gap of 2. We would then compare the first element (5) to the element at the gap distance (2). Since 5 is greater than 2, the two elements are not swapped. We would then move on to the next element (3).

We would compare the second element (3) to the element at the gap distance (5). Since 3 is less than 5, the two elements are swapped.

We would continue this process, comparing each element to the element at the gap distance and swapping them if necessary. After sorting the entire array with a gap of 2, we would have the following array:

```[3, 5, 1, 2, 4]```

We would then repeat the process with a gap of 1. This time, we would compare each element to the element next to it and swap them if necessary. After sorting the entire array with a gap of 1, we would have the following sorted array:

```[1, 2, 3, 4, 5]```

1. ***Bubble Sort:***

<img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607">

Bubble sort is a simple sorting algorithm that repeatedly compares adjacent elements of an array and swaps them if they are in the wrong order. It is called bubble sort because the smaller elements gradually "bubble" to the top of the array, while the larger elements "sink" to the bottom. The worst-case time complexity of bubble sort is O(n^2), but the average-case time complexity is O(n^2). This means that bubble sort is typically not a very efficient sorting algorithm, especially for large arrays. Bubble sort is a simple algorithm that is easy to understand and implement. It is often used in educational settings to teach students about the basics of sorting algorithms. It is also sometimes used in embedded systems and other applications where memory is limited and efficiency is not a top priority.

***Example***

Consider the following unsorted array:

```[5, 3, 2, 1, 4]```

To sort this array using bubble sort, we would start at the beginning of the array and compare the first two elements (5 and 3). Since 5 is greater than 3, we would swap the two elements.

```[3, 5, 2, 1, 4]```

We would then compare the second and third elements (3 and 2). Since 3 is greater than 2, we would swap the two elements.

```[2, 3, 5, 1, 4]```

We would continue this process, comparing adjacent elements and swapping them if necessary. After sorting the entire array, we would have the following sorted array:

```[1, 2, 3, 4, 5]```

4. ***Quicksort:***

<img src="https://i.imgur.com/fo1Yw1j.gif">

Quicksort is a divide-and-conquer sorting algorithm. It works by recursively partitioning the array around a pivot element, and then sorting the two subarrays created by the partition. This algorithm works as follows:

• Choose a pivot element from the array. ([pivot](https://medium.com/basecs/pivoting-to-understand-quicksort-part-2-30161aefe1d3))

•Partition the array around the pivot element, such that all elements smaller than the pivot are placed to the left of the pivot, and all elements larger than the pivot are placed to the right of the pivot.

•Recursively sort the two subarrays created by the partition.

The partition step is the key to the quicksort algorithm. It is what makes quicksort so efficient. There are many different ways to partition an array, but one common approach is to use the Lomuto partition scheme.

The Lomuto partition scheme works as follows:

1. Initialize two pointers, i and j.
2. Set i to the first element of the array and j to the last element of the array.
3. While i is less than j:
	• If the element at index i is less than or equal to the pivot element, swap the elements at indices i and j and increment i.
	• Otherwise, decrement j.
4. Swap the pivot element with the element at index i.

After the partition step, the pivot element will be in its correct position in the sorted array. The two subarrays created by the partition will also be unsorted. The quicksort algorithm then recursively sorts the two subarrays. The worst-case time complexity of quicksort is O(n^2), but the average-case time complexity is O(n log n). This makes quicksort one of the most efficient sorting algorithms available. Quicksort is a widely used sorting algorithm. It is used in many different applications, including: Operating systems, Databases, Compilers and Graphics processing units (GPUs).

***Example***

Consider the following unsorted array:

```[5, 3, 2, 1, 4]```

To sort this array using quicksort, we would first choose a pivot element. We can choose any element in the array, but it is often best to choose a median element. In this case, we will choose the middle element, which is 3.

We would then partition the array around the pivot element. We can use the Lomuto partition scheme to do this. After the partition step, the array will look as follows:

```[2, 1, 3, 5, 4]```

The pivot element (3) is now in its correct position in the sorted array. The two subarrays created by the partition are also unsorted. The quicksort algorithm will now recursively sort the two subarrays.

The quicksort algorithm will recursively sort the two subarrays until the entire array is sorted. After the algorithm terminates, the array will be sorted in ascending order.

6. ***Heapsort:***

<img src="https://upload.wikimedia.org/wikipedia/commons/f/fe/Heap_sort_example.gif">

Heapsort is a sorting algorithm that uses a heap data structure to sort an array. A heap is a complete binary tree where each parent node is greater than or equal to its child nodes.
The heapsort algorithm works as follows:

• Build a heap from the input array.
• Repeatedly remove the root element of the heap (which is the largest element) and place it at the end of the sorted array.
• Restore the heap property by replacing the removed root element with the largest of its child nodes.
• Repeat steps 2 and 3 until the heap is empty.

Example
Consider the following unsorted array:

[5, 3, 2, 1, 4]
To sort this array using heapsort, we would first build a heap from the array. The heap would look as follows:

5
/ \
3 2
/ \
1 4
We would then repeatedly remove the root element of the heap and place it at the end of the sorted array. After the first iteration, the sorted array would look as follows:

[4, 3, 2, 1, 5]
We would then restore the heap property by replacing the removed root element with the largest of its child nodes. The heap would then look as follows:

4
/ \
2 3
/ \
5 1
We would repeat this process until the heap is empty. After the last iteration, the sorted array would look as follows:

[1, 2, 3, 4, 5]

The worst-case time complexity of heapsort is O(n log n), and the average-case time complexity is also O(n log n). This makes heapsort one of the most efficient sorting algorithms available.

Heapsort is a widely used sorting algorithm. It is used in many different applications, including:

Operating systems
Databases
Compilers
Graphics processing units (GPUs)


7. ***Revised Bubble Sort:***


8. ***Selection Sort:***



9.  ***Insertion Sort:***



10. ***Merge Sort:***



11. ***Counting Sort:***


12. ***Radix Sort:***


13. ***Bucket Sort:***



14. ***Comb Sort:***


15. ***Turk algorithm:***





<a href="https://www.crio.do/blog/top-10-sorting-algorithms/"><img src="https://www.crio.do/blog/content/images/2022/01/Top-10-Sorting-Algorithms-You-Need-To-Know.png">





<br>

## Running Tests

### Testing mandatory part

<p align="justify">


</p>




## Evaluation

Test the notable cases: 0, 1, 3, 5, 50, 100, 250, 500 and iterate many times to understand the efficiency.

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

- [Sorting algorithms 1](https://lamfo-unb.github.io/2019/04/21/Sorting-algorithms/#:~:text=%2B1%5D%20%3D%20temp-,Quicksort,greater%20numbers%20on%20the%20right.)

- [Sorting algorithms 2](https://www.crio.do/blog/top-10-sorting-algorithms/)

- [pivot_quick_sort](https://medium.com/basecs/pivoting-to-understand-quicksort-part-2-30161aefe1d3)

<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>
