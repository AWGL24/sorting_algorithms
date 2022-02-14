#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the insertion sort
 *
 * @list: array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *node, *temporary;

	if (list == NULL || *list == NULL)
		return;

	head = *list;
	while ((head = head->next))
	{
		node = head;
		while (node->prev && node->n < node->prev->n)
		{
			temporary = node->prev;
			if (node->next)
				node->next->prev = temporary;
			if (temporary->prev)
				temporary->prev->next = node;
			else
				*list = node;
			temporary->next = node->next;
			node->prev = temporary->prev;
			node->next = temporary;
			temporary->prev = node;
			print_list(*list);
		}
	}
}