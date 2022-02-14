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
	size_t i, j;
	int n;
	
	while (swapped(array, size) == 1)
	{
		for (i = 0; i < size; i++)
		{
			j = i + 1;
			if (array[i] > array[j])
			{
				n = array[i];
				array[i] = array[j];
				array[j] = n;
				print_array(array, size);
			}
		}
		i = 0;
	}
}

void swap_elements(int *x, size_t *y)
{
	int *tmp;

	tmp = *x;
	*y = tmp;
	*x = *y;
}
