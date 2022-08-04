#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - variadic function to print sum of parameters
 *@n: first parameter
 *Return: total, the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list tot;

	va_start(tot, n);
	unsigned int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(tot, int);
	}
	va_end(tot);

	return (sum);
}
