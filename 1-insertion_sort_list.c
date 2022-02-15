#include <stddef.h>
#include "sort.h"

/**
 * insertion_sort_list - bubble_sort
 * @list: list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *list2 = *list;
	listint_t *fst = *list;
	listint_t *ptr1, *ptr2;
	int counter, i, j, swapped = 1;
	
	counter = 0;
	while (list2)
	{
		counter++;
		list2 = list2->next;
	}

	for (i = 0; i <= counter; i++)
	{
		list2 = *list;
		swapped = 0;

		for (j = 0; j < counter - i - 1; j++)
		{
			if (list2->n > list2->next->n)
			{
				ptr1 = list2;
				ptr2 = list2->next;
				swap_list(ptr1, ptr2);
				print_list(fst);
				swapped += 1;
			}
			list2 = list2->next;
		}
		if (swapped == 0)
			break;
	}
}

void swap_list(listint_t *array, listint_t *array2)
{
	listint_t *pre = array->prev;
	listint_t *nxt = array2->next;

	if (array->prev)
		array->prev->next = array2;
	if (array2->next)
		array2->next->prev = array;
	array2->next = array;
	array2->prev = pre;
	array->prev = array2;
	array->next = nxt;
}
