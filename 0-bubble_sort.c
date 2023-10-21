#include "sort.h"

/**
 * bubble_sort - function to do bubble sort
 * @array: list of numbers to be sorted
 * @size: the length of the array
 * no return
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	size_t tmp;

	if (array == NULL)
	{
		return;
	}

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
	} while (swapped);
}
