#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @s: input string
 * Return: char
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			/* i used the ascii values of lowercase alphabets */
		s[i] = s[i] - 32;
	}
	return (s);
}
