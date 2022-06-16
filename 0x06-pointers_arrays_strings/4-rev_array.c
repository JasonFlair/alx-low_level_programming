#include "main.h"

/**
 * reverse_array -this function will reverse the content of an array
 * @a: array
 * @n: number of elements of the array
 * Return: Nil
 */
void reverse_array(int *a, int n)
{
	int temp;
	for (int low = 0; high = n - 1; low < high; low++, high--)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}
}
