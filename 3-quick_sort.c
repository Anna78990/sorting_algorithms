#include <stddef.h>
#include "sort.h"

/**
 * quick_sort - quick sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, (int)size);
}

/**
 * partition - partition the array
 * @array: array to sort
 * @low: index to start
 * @high: index to end
 * @size: length of array
 * Return: pivot index
 */

int partition(int array[], int low, int high, int size)
{
	int pivot, i, j;
	(void)size;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_elements(&array[i], &array[j]);
			if (j != i)
				print_array(array, size);
		}
	}
	if (array[high] < array[i + 1])
	{
		swap_elements(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSort -  quick sort for recursion
 * @array: array to sort
 * @low: index to start
 * @high: index to end
 * @size: length of array
 * Return: Nothing
 */

void quickSort(int *array, int low, int high, int size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, (int)size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
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
