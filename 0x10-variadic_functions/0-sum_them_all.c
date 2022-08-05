#include <stdarg.h>

/**
 *sum_them_all - variadic function to print sum of parameters
 *@n: first parameter
 *Return: tot, the sum of parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list tot;

	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(tot, n);

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(tot, int);
	}
	va_end(tot);

	return (sum);
}
