#include "main.h"

/**
 * print_alphabet_x10 - a function that prints each alphabet ten times
 * main - main block
 * prints new line
 */
void print_alphabet_x10(void)
{
	char b;
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
