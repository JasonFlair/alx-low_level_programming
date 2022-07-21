#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input stringeturn
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint( const char *b)
{
 unsigned int base_two = 1;
 unsigned int ui=0;
 int c;
 unsigned int len;

 len = _strlen(b);

  for (c = len-1; c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
      return (0);
    if (b[c] == '1')
    {
     ui += base_two;
     }
    base_two *= 2;
}
 return (ui);
}
