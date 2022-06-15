#include "main.h"

/**
 * _strncpy - function to copy a string into another
 * @dest: destination
 * @src: source
 * @n: num of bytes from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && str[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0'

	return (dest);
}	
