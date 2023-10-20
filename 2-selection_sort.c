#include "sort.h"

/**
 * selection_sort - function that sorts array by using selection sort
 * @array: array to be sorted
 * @size: the length of the array
 * no return
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t tmp;
	size_t minIndex;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			tmp = array[minIndex];
			array[minIndex] = array[i];
			array[i] = tmp;
		}
	}
}

