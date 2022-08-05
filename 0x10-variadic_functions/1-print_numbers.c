#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function entry
 *@separator: the char to be printed between numbers
 *@n: an int value
 *Return: void;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pr);

}
