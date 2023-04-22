#include "sort.h"

void swap_ints(int *a, int *b);
void heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

/**
 * swap_ints - Swaps two integers in a given array.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * heapif - Turns a binary tree into a binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the tree/array.
 * @base: The index of the tree.
 * @root: The root node of the binary tree.
 */
void heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != root)
	{
		swap_ints(array + root, array + large);
		print_array(array, size);
		heapify(array, size, base, large);
	}
}

/**
 * heap_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the shift-down heap sorting
 * algorithm. Prints the array after each swapped.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		heapify(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap_ints(array, array + i);
		print_array(array, size);
		heapify(array, size, i, 0);
	}
}