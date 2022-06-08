#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number being checked
 * Return: 1 and print + if n is greater than zero
 * and prints 0 if n is zero
 * also prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
