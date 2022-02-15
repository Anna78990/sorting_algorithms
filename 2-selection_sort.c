#include <stddef.h>
#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min_index, changed;

	for (i = 0; i < (int)size - 1; i++)
	{
		min_index = i;
		changed = 0;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
				changed = 1;
			}
		}
		swap_elements(&array[min_index], &array[i]);
		if (changed == 1)
			print_array(array, size);
	}
}

/**
 * swap_elements - swap the elements
 * @x: element1
 * @y: element2
 */

void swap_elements(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
