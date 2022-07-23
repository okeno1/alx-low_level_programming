#include "main.h"

/**
 *_memset - function name, filling memory with constant byte
 *@s: memory area to be filled
 *@b: constant bytes used in filling
 *@n: sequential memory bytes to fill
 *
 *Return: the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
