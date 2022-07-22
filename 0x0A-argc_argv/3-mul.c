#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers
 *@argc: number of arguments passed in command line
 *@argv: array of pointers containing arguments passed
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(arg[2]);
	result = num1 * num2;

	print("%d\n", result);
	return (0);
}
