#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of char initialized with a specific char
 *@size: array size to be initialized
 *@c: characters making up the array
 *Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(c));

	if (p == NULL)
	{
		return (0);
	}

	i = 0;

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

