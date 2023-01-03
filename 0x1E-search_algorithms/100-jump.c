#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for a value in an array using the jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index of the first occurrence of value in array, or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
    /*convert size from size_t to double*/
    double double_size = (double)size;
    size_t squareroot = sqrt(double_size);
    unsigned int start = 0;
    unsigned int end = squareroot;
    unsigned int i;

    while (array[start] < value)
    {
        
        printf("Value checked array[%u] = [%d]\n", start, array[start]);
        
        if (array[end] >= value)
        {
            printf("Value found between indexes [%u] and [%u]\n", start, end);
            for (i = start; i <= size - 1; i++)
            {
                printf("Value checked array[%u] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                    return i;
                }
            }
        }
        start = end;
        end = start + squareroot;
    }
    return -1;
}
