#include "main.h"

/**
 * print_most_numbers - function to print digits 0-9
 * excluding nums 2 & 4
 * main - main block
 * Return: 0;
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
