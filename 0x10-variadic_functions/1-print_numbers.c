#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_numbers - function entry
 *@separator: the char to be printed between numbers
 *@n: an int value
 *Return: Always 0 (Success);
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, int));

		if (separator == NULL)
		{
			continue;
		}
	}
	va_end(pr);
	printf('\n');

}
