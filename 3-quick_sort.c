#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	sub_arr(array, 0, size - 1, size);
}

/**
 * partition - it returns the new pivot index
 * @array: array to be sorted
 * @start: beginning of the array
 * @end: ending of the array
 * @size: size of the array
 * Return: it returns the new pivot index
*/

int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], tmp;
	int i = start - 1;
	int j;

	for (j = start; j <= end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i < j)
			{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * sub_arr - Recursively sorts subarrays using the quicksort algorithm.
 *
 * @array: The array to be sorted.
 * @start: The starting index of the subarray.
 * @end: The ending index of the subarray.
 * @size: The size of the array.
 */

void sub_arr(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		sub_arr(array, start, pivot - 1, size);
		sub_arr(array, pivot + 1, end, size);
	}
}
