#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: the int ?
 * if malloc fails, status value is equal to 98
 * Return: memory pointer - *mp
 */
void *malloc_checked(unsigned int b)
{
	char *mp;

	mp = malloc(b);

	if (mp == NULL)
	{
		exit(98);
	}
	return (mp);
}
