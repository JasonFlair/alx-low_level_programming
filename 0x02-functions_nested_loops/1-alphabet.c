#include <stdio.h>
#include "main.h"

/**
 * main - main block
 * Return: 0;
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	print_alphabet();
	putchar('\n');
	return (0);
}
