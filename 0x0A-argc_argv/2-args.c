#include <stdio.h>

/**
 *main - program that prints all arguments it receives.
 *@argc: total number of arguments passed to th command line
 *@argv: array of pointers of the arguments passed in the commandline
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
