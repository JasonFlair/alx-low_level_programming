#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to be stored
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cp;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cp = malloc(sizeof(c) * size);

	if (cp == NULL)
	{
		return (1);
	}
	for (i = 0; i < size; i++)
	{
		cp[i] = c;
	}
	return (cp);
}
