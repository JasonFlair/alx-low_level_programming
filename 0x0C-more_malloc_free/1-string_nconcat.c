#include <stdlib.h>
#include "main.h"

/**
 *  _strlen - function created to check the
 *  length of the string
 *  @s: string
 *  Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *mp;
	unsigned int s1_length = _strlen(s1);
	unsigned int s2_length = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= s2_length)
	{
		mp = malloc(s1_length + s2_length + 1);
	}
	else
	{
		mp = malloc(s1_length + n * sizeof(char) + 1);
	}

	if (mp == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		mp[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
	{
		mp[i] = s2[j];
	}
	mp[i] = '\0';

	return (mp);
}
