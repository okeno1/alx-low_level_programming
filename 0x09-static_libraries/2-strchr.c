#include "main.h"

/**
 *_strchr - function for locating a character in a string
 *@s: the string
 *@c: the character to be located in the string
 *
 *Return: point to string if found, else, return NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (c == s[x])
		{
			s += x;
			return (s);
		}
	}
	return ('\0');
}
