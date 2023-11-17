#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, a;

	/*if (array == NULL || size < 2)
		return;*/

	for (i = 0; i < size - 1; i++)
	{
		tmp = i;
		for (j = tmp; j < size - 1; j++)
		{
			if (array[tmp] > array[j + 1])
				tmp = j + 1;
			else
				continue;
		}
		if (tmp == i)
			continue;
		else
		{
			a = array[i];
			array[i] = array[tmp];
			array[tmp] = a;
			print_array(array, size);
		}

	}
}
