#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nil
 */
void reverse(char *s)
{
	// get the length of the string
	int n = strlen(s);

	//swap characters
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		char ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}
