#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to priny
 *
 * Return: On success 1.
 * On error, -1 is returned, and err no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - a function that prints, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
