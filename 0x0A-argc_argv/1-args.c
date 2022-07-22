#include <stdio.h>

/**
 *main - function to return the number of arguments passed in commandLine
 *@argc: number of arguments passed in comand Line
 *@argv: array of pointers to the command Line arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
