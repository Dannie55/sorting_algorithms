#include "sort.h"

/**
<<<<<<< HEAD
 * swap_ints - Swap two integers in a given array.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
=======
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
>>>>>>> 2d36eb40628d9a07b77cc766c9431f36ad8176cc
 */
void swap_ints(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

/**
<<<<<<< HEAD
 * bubble_sort - Sort an array of integers.
 * @array: An array to be sorted.
=======
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
>>>>>>> 2d36eb40628d9a07b77cc766c9431f36ad8176cc
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
<<<<<<< HEAD
        size_t i, len = size;
        bool bubble = false;
=======
	size_t i, len = size;
	bool bubbly = false;
>>>>>>> 2d36eb40628d9a07b77cc766c9431f36ad8176cc

        if (array == NULL || size < 2)
            return;

<<<<<<< HEAD
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
=======
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
>>>>>>> 2d36eb40628d9a07b77cc766c9431f36ad8176cc
}
