#include <stddef.h>
#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array to sort
 * @size: length of array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, (int)size);
}

int partition(int array[], int low, int high, int size) 
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_elements(&array[i], &array[j]);
		}
	}
	swap_elements(&array[i + 1], &array[high]);
	 print_array(array, size);
	return (i + 1);
}

/**
 * swap_elements - swap the elements
 * @x: element1
 * @y: element2
 */

void quickSort(int *array, int low, int high, int size)
{
	int pi;

    if (low < high)
    {
        pi = partition(array, low, high, size);
	quickSort(array, low, pi - 1, size);
	quickSort(array, pi + 1, high, size);
    }
}
