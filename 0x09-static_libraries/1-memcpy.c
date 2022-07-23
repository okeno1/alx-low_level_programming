#include "main.h"

/**
 *_memcpy - function for copying memory area
 *@dest: destination for copied memory area
 *@src: source to copy memory area
 *@n: number of bytes to copy
 *
 *Return: the destination, dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);

}
