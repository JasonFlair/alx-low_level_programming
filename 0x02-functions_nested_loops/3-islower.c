#include "main.h"

/**
 * _islower - check for lower characters
 * returns 1 if alphabet is in lowecase
 * returns 0 otherwise
 */
int _islower(int c)
{
	char ch;
	int c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
		
	}
	return (0);
}
