#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 * @s: string to be modified
 *
 * Return: result
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			/* used their ascii values */
			s[i] = s[i] - 32;
	}
	return (s);
}
