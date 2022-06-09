#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: is going to be checked
 * returns 1 if alphabet is in lowecase
 * returns 0 otherwise
 */
int _isupper(int c);
{

	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

