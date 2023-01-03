#include "search_algos.h"
/**
 * linear_search - search for a value in an array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value) 
{
    unsigned int i;
    if (array == NULL)
    {
        return (-1);
    }
    if (array)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%d] = [%d] \n", i, array[i]);
            if (array[i] == value)
            {
                return i;
            }
        }
    }
    return -1;
}
