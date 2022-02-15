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
	int key;
	
	while (list2->next)
	{
		key = list2->next->n;
		while (list2)
		{
			if (list2->n > key)
			{
				swap_list(list2, list2->next);
				print_list(fst);
			}
			list2 = list2->prev;
		}
		list2 = list2->next;
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
