#include "sort.h"

void quick_sort(int *array, size_t size)
{
    int i, j = 0, temp, pivot;

    pivot = array[size - 1];
    i = j - 1;
    for(j = 0; j <= pivot; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            print_array(array, size);
        }
    }
    j++;
    if (array[j] == pivot)
    {
        i++;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        print_array(array, size);
    }
}
