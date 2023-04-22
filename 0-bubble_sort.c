#include "sort.h"

/**
 * swap_ints - Swap two integers in a given array.
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
 * bubble_sort - Sort an array of integers.
 * @array: An array to be sorted.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
        size_t i, len = size;
        bool bubble = false;

        if (array == NULL || size < 2)
            return;

        while (bubble == false)
        {
                bubble = true;
                for (i = 0; i < len - 1; i++)
                {
                        if (array[i] > array[i + j])
                        {
                                swap_ints(array + i, array + i + 1);
                                print_array(array, size);
                                bubble = false;
                        }
                }
                len--;
        }
}
