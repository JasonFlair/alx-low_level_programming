#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nil
 */
void reverse(char *s)
{
	int i, len, temp;
	len = strlen(s);/* use strlen() to get the length of str string */

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
