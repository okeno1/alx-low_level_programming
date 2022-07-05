#include "main.h"

/**
 *main - Entry point
 *
 *value to retun is always 0 (Success)
 *_abs - a function that computes the absolute value of an integer
 *@ab: integer input
 *Return: absolute value of ab
 */

int _abs(int ab)

{

	return (ab * ((ab > 0) - (ab < 0)));

}
