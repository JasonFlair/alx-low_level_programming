#include <stdio.h>
#include "main.h"

/**
 * main - main block
 * next line follows
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
}
