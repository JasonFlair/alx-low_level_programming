#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The character to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, nothung printed.
 *              If one of the strings if NULL, (nil) is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list(ap);
    unsigned int i;
    char *string;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        string = va_arg(ap, char *);
        if (string == NULL)
        {
            printf("(nil)");
        }
        printf("%s", string);
        if (i != n - 1 && separator != NULL)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end(ap);
}
