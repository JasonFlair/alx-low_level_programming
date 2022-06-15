#include <stdio.h>
#include "main.h"

/**
 * _strcat: concatenates strings
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) +1); /* +1 for the null terminator */
	strcpy(result, dest);
	strcpy(result, src);
	return result;
}
