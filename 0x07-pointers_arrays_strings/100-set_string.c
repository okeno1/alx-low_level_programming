#include "main.h"

/**
 *set_string - function for setting the value of a pointer to a char
 *@s: a pointer to the address of string s
 *@to: the stringto set value to
 *Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
