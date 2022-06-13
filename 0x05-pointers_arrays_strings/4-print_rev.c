#include "main.h"

/**
 * print_rev - this prints a string in reverse
 * @s: input string
 *  Return: nil
 */
void print_rev(char *s)
{
	char *r;

	while (i = 0)
	{
		*s--;
		*r = *s;
		r++;
		i--;
	}
	*r='\0';
	_putchar("%s", *r);
	_putchar('\n');
}
