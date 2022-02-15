#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - bubble_sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int n, swapped = 1;

	for (i = 0; i < size && swapped == 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
