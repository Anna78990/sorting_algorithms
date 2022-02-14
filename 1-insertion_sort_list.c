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
	listint_t *tmp, *thd, *pre, *fst;
	int n;
	
	while (swapped_array(list2) == 1)
	{
		while (list2->next != NULL)
		{
			n = list2->n;
			if (n > list2->next->n)
			{
				tmp = list2->next;
				if (tmp->next != NULL)
				{
					thd = list2->next->next;
					tmp->next->prev = tmp->prev;
					tmp->next = tmp->next->next;
					tmp->prev->next = thd;
					tmp->prev = thd;
					thd->next = tmp;
					thd->prev = list2;
				}
				else
				{
					pre = list2;
					tmp->next = pre;
					tmp->prev = pre->prev;
					pre->prev->next = tmp;
					pre->prev = tmp;
					pre->next = NULL;
				}
			}
			fst = list2;
			while (fst->prev != NULL)
				fst = fst->prev;
			print_list(fst);
			list2 = list2->next;
		}
		list2 = *list;
	}
}

int swapped_array(listint_t *array)
{
	int first_number = array->n;

	while (array->next)
	{
		if (first_number > array->n)
			return (1);
		array = array->next;
	}
	return (0);
}
