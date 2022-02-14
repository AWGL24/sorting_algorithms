#include "sort.h"
/**
 * swap2 - second implementation of a function that swaps two elements
 *
 * @a: param
 * @b: param
 * @array: param
 * @size: param
 */
void swap(int a, int b, int *array, size_t size)
{
	int t;

	t = array[a];
	array[a] = array[b];
	array[b] = t;
	print_array(array, size);
}
/**
 * partition - function that takes last element as pivot
 * and places it at its correct position in sorted array
 *
 * @array: param
 * @low: param
 * @high: param
 * @size: param
 * Return: pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int newp = low;
	int i;

	for (i = low; i < high; ++i)
	{
		if (array[i] <= pivot)
		{
			if (i != newp)
				swap(newp, i, array, size);
			newp++;
		}
	}
	if (newp != high)
		swap(newp, high, array, size);
	return (newp);
}
/**
 * quicksort - function that does the sort of integers
 *
 * @array: param
 * @low: param
 * @high: param
 * @size: param
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers
 * using quicksort
 *
 * @array: array where the integers are stored
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
