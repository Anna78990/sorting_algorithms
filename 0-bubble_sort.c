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

int swapped(int *array, size_t size)
{
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[0] > array[i])
			return (1);
	}
	return (0);
}
