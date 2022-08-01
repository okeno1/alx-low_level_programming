#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function to concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatanated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concStr;
	unsigned int i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i, j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + 1;
	concStr = malloc(sizeof(char) * size);

	if (concStr == NULL)
	{
		return (NULL);
	}

	i, j = 0;
	while (s1[i] != '\0')
	{
		concStr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concStr[i] = s2[j];
		j++, i++;
	}

	concStr[i] = '\0';
	return (concStr);

}
