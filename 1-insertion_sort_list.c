#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the insertion sort
 *
 * @list: array
 */
void insertion_sort_list(listint_t **list)
{
	int i, j;
	listint_t key;
	listint_t *array = *list;

	for (i = 1; i < array; i++)
	{
		key = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}
