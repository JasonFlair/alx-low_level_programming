#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    /*convert size from size_t to double*/
    double double_size = (double)size;
    size_t squareroot = sqrt(double_size);
    unsigned int start = 0;
    unsigned end = squareroot;
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
