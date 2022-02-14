#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *tmp = NULL;
	listint_t *current = *list;
	listint_t *next = current->next;
	listint_t *newNode = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->prev = current->next = NULL;
		if (*list == NULL)
			*list = newNode;
		else if ((*list)->n >= newNode->n)
		{
			newNode->next = *list;
			newNode->next->prev = newNode;
			*list = newNode;
		}
		else
		{
			tmp = *list;
			while (tmp->next != NULL && tmp->next->n < newNode->n)
				tmp = tmp->next;
			newNode->next = tmp->next;
			if (tmp->next != NULL)
				newNode->next->prev = newNode;
			tmp->next = newNode;
			newNode->prev = tmp;
		}
		current = next;
	}
	*list = sorted;
}