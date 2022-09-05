#include "main.h"

/**
 * _abs - check r
 * @r: integer input
 * Description: This function returns the absolute value of a number
 * Return: Absolute value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
