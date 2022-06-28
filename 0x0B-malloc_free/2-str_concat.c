#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string pointer - sp
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length = _strlen(s1);
	int s2_length = _strlen(s2);
	char *sp;
	int i;
	int size = s1_length + s2_length + 1;

	sp = malloc(size * sizeof(char));
	if (sp == 0)
	{
		return (NULL);
	}

	for (i = 0; i < s1_length; i++)
	{
		sp[i] = s1[i];
	}
	for(i = 0; i < s2_length; i++)
	{
		sp[s1_length + i] = s2[i];
	}
	return (sp);
}

