#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nil
 */
void reverse(char* str)
{
	// get the length of the string
	int n = strlen(str);

	//swap characters
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}
