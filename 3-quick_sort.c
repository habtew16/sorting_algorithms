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
	int j, tmp;
	int pivot = array[high];
	int i = low - 1;

	if (array == NULL)
		return;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != high)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i);
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
