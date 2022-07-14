#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: memory space to be filled
 *@b: byte to fill with
 *@n: number of spaces to fill
 *
 *Return: pointer to memory area s
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

return (dest);

}
