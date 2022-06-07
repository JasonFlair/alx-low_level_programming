#include <stdio.h>
#include "main.h"

/**
 * main - main block
 * print alphabets
 * next line follows
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
