#include "main.h"

/**
 *_print_rev_recursion.c - function to print a string in reverse
 *@s: string to reverse
 *Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
