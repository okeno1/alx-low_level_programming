#include "main.h"

/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: source string
 *@accept: accepted charactes
 *
 * Return:the string since the first round accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}


