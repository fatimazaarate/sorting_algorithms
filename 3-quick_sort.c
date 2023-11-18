#include "sort.h"

void quick_sort(int *array, size_t size)
{
    sub_arr(array, 0, size - 1, size);
}

int partition(int *array, int start, int end, size_t size)
{
    int pivot = array[end], tmp;
    int i = start - 1;
    int j;

    for(j = start; j <= end; j++)
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
    return i;
}

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
