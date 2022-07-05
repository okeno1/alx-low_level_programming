#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	char *sh = "Okeno";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
