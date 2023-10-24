#include "sort.h"

/**
 * partition - function that creates partition based on
 * the pivot element
 * @array: list of aarrays that will be partitioned
 * @low: first position in the array
 * @high: last position in the array
 * @size: the length of the array
 * Return: int pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low - 1, aux, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[low])
		{
			i++;
			if (i < j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[high])
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quickSort - sorts an array of integers recursively
 * @array: array to sort
 * @low: first position
 * @high: last position
 * @size: array size
 */
void quickSort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size);
		quickSort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
