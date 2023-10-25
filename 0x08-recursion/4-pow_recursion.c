#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion: calculate x to the power of y
 * @x: base of the power
 * @y: exponent
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}

	return (x * pow_recursion(x, y - 1));
}
