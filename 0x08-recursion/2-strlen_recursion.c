#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	while (s[i] != '0')
	{
		i++;
	}
	return (i);
}
