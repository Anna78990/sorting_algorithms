#include <stddef.h>
#include "sort.h"

/**
 * quick_sort - quick_sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min_index;
	
	for (i = 0; i < (int)size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		swap_elements(&array[min_index], &array[i]);
	}
}

void swap_elements(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*y = tmp;
	*x = *y;
}
