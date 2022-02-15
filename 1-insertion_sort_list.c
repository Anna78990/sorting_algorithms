#include <stddef.h>
#include "sort.h"

/**
 * insertion_sort_list - bubble_sort
 * @list: list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *list_advance = (*list), *list_retreat = (*list);
	listint_t *list2 = *list;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;	
	while (list_advance)
	{
		while (list_retreat)
		{
			if (list_retreat->n > list_advance->n)
			{
				swap_list(list, list_advance, list_retreat);
				print_list(*list);
			}
			list_retreat = list_retreat->prev;
		}
		list2 = list2->next;
		list_advance = list2;
		list_retreat = list2;
	}
}

void swap_list(listint_t **list, listint_t *array, listint_t *array2)
{
	if (array->next != NULL)
		array->next->prev = array->prev;
	array->prev->next = array->next;
	array->prev = array2->next;
	array2->prev = array;
	array->next = array2;
	if (array->prev != NULL)
		array->prev->next = array;
	else
		*list = array;
}
