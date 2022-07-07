#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - will return the sum of all its paramters.
 * @n: Num of paramters passed to the function.
 * @...:number of paramters to calculate the sum of.
 *
 * Return: if n == 0, return 0.
 * the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
    
    if (n == 0)
    {
        return 0;
    }
    va_list ap;
    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}
