#include <stddef.h>
#include "sort.h"

/**
 * shell_sort - shell sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	int i, j, h;

	for (h = 1; h <= (int)size / 9; h = (3 * h) + 1)
		;

	for ( ; h > 0; h /= 3)
	{
		for (i = h; i < (int)size; i++)
		{
			j = i;
			while ((j > h - 1) && (array[j - h] > array[j]))
			{
				swap_elements(&array[j - h], &array[j]);
				j -= h;
			}
		}
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
