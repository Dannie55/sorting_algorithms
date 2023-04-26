### Sorting Algorithm ###

A sorting Algorithm is used in re-arranging a given array or list of elements.
according to the comparison.

For example the below list of characters is sorted in an increasing order of 
their ASCII values. That is, the character with a lesser ASCII value will be
placed first than the character with a higher ASCII values.


## General Learning Objectives ##
- At least four different sorting algorithms.
- What is the Big O notation, and how to evaluate the time complexity of an 
algorithm
- How to select the best sorting algorithm for a given input.

## Test Files ##
- tests: Folder of tests files.

## Helper Files ##
- Print_arrays.c : C function that prints an array of integers.
- print_list.c: C function that prints a `listint_t` of a doubly-linked lists.

## Header Files ##
- sort.h: Header file containing definitions and prototypes for all types and 
functions written for the project.

Data Structure:

typedef struct listint_s
{
		const int n;
		struct listint_s *prev;
		struct listint_s *next;
} listint_t;

|File		| Prototype|
| ---		 | ---|
| `print-array.c` | void print_array(const int *array, size_t size) |
| `print_list.c` | void print_list(const listint_t *list) |
| `0-bubble_sort.c`| void bubble_sort(int *array, size_t size) |
| `1-insertion_sort_list.c`| void insertion_sort_list(lisint_t **list)|
| `2-selection_sort.c`| void selection_sort(int **array, size_t size)|
| `

