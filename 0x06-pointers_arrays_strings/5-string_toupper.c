#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @s: input string
 * Return: char
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
			/* i used the ascii values of lowercase alphabets */
			*s = *s - 32;
	}
	return (s);
}
