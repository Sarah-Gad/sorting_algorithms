#include "sort.h"
/**
 * insertion_sort_list - I usded this function to sort a doubly linked list
 * using the insertion sorting algooo.
 * @list: the head of the doubly linked list
 * Return: it doesnt return anythingg.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *what_next, *what_prev, *keeper;

	if (list == NULL || *list == NULL)
		return;
	what_next = (*list)->next;
	while (what_next != NULL)
	{
		what_prev = what_next->prev;

		while (what_prev != NULL && what_prev->n > what_next->n)
		{
			keeper = what_prev->prev;
			what_prev->prev = what_next;
			what_prev->next = what_next->next;
			if (what_next->next != NULL)
				what_next->next->prev = what_prev;
			what_next->prev = keeper;
			what_next->next = what_prev;
			if (keeper != NULL)
				keeper->next = what_next;
			else
				*list = what_next;
			what_prev = what_next->prev;
			print_list(*list);
		}
		what_next = what_next->next;
	}
}
