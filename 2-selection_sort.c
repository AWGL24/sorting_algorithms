#include "sort.h"
/**
 * swap - function that swaps two elements
 *
 * @xp: parameter
 * @yp: parameter
 */
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using selection sort
 *
 * @array: parameter
 * @size: parameter
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, mini_idx;

	for (i = 0; i < size - 1; i++)
	{
		mini_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mini_idx])
				mini_idx = j;
		}
		swap(&array[mini_idx], &array[i]);
		print_array(array, size);
	}
}