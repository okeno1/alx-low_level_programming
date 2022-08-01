#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function to return pointer to newly allocated space for array
 *@str: string parameter to be copied
 *Return: pointer to the newly allocated array space
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(sizeof(p) * i);

	if (p == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}

	p[j] = '\0';

	return (p);
}
