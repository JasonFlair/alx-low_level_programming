#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if value is not present in
 * array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t start = 0;
    size_t end = size - 1;
    size_t i;

    if (array == NULL)
        return -1;

    while (start <= end)
    {
        size_t mid = start + (end - start) / 2;

        printf("Searching in array: ");
        for (i = start; i < end; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[end]);

        if (array[mid] == value)
            return mid;

        /* if value is greater than mid point, search the right half */    
        else if (array[mid] < value)
            start = mid + 1;
        else
        /* search the left half */
            end = mid - 1;
    }

    return -1;
}