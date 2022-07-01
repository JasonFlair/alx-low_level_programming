#include <stdlib.h>
#include "main.h"


/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *ap;

	if (min > max)
	{
		return (NULL);
	}
	ap = malloc(((max - min) +1) * sizeof(int));
	if (ap == 0)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ap[i] = min;
	}
	return (ap);
}
