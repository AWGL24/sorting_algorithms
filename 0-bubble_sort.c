#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the bubble sort algorithm
 *
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	/* first check if the array is empty or
	the size is less than what it has to be*/
	if (array == NULL || size < 2)
		return;

	/*first loop where the pointer runs thru the array
	to find the desired index and set the numbers we want to swap*/
	for (i = 0; i < size - 1; i++)
	{
		/*nested loop where the second pointer runs thru the array
		and sets itself were the first pointer is seated
		so we can swap the numbers*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*operation that does the swap counting on that the
			second pointer number is bigger than the one next to it*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
