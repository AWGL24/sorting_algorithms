#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the insertion sort
 *
 * @list: array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *i, *tmp;
	int value = 0;

	if (*list == NULL || list == NULL)
		return;

	head = (*list)->next;

	while (head != NULL)
	{
		i = head;
		value = i->n;
		while (i->prev && i->prev->n > value)
		{
			tmp = i->prev;
			i->prev = tmp->prev;
			tmp->next = i->next;
			i->next = tmp;
			tmp->prev = i;
			if (tmp->next)
				tmp->next->prev = tmp;
			if (i->prev)
				i->prev->next = i;
			else
				*list = i;
			print_list(*list);
		}
		head = head->next;
	}
}
