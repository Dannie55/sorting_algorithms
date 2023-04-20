#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * main - Entry point
 * 
 * Return: Always 0.
 */
 int main(void)
 {
    int array[] = {18, 46, 99, 61, 12, 52, 97, 72, 87, 5};
    size_t n = sizeof(array)/ sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
 }
