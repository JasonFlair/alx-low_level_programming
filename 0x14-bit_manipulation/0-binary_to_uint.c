#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
 unsigned int decval = 1;
 unsigned int ui=0;
 int c;
 unsigned int len;

 for (len = 0; b[len] != '\0'; len++)
 ;

  for (c = len-1; c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
      return (0);
    if (b[c] == '1')
    {
     ui += decval;
     }
    decval *= 2;
}
 return (ui);
}
