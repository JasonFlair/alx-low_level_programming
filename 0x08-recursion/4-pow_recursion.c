#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @x: base
 * @y: exponent
 * Return: the value/answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
