#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: is going to be checked
 *
 * Returns: 1 if alphabet is in uppercase
 * Returns: 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
