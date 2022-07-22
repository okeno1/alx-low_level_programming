#include <stdio.h>

/**
 *main - function for writing the program name
 *@argc: number of arguments passed into the command line
 *@argv: an array of pointers to the command line arguments
 *Return: 0;
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
