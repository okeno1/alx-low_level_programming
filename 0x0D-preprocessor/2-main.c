#include <stdio.h>
#include <stdlib.h>

/**
 *main - printing file name it was compiled from
 *
 *Return: 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}

