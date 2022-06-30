#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mp = malloc(nmemb * size);
	if (mp == 0)
	{
		return (NULL);
	}

	_memset(mp, 0, size);

	return (mp);
}
