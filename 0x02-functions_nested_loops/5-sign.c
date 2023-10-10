#include <stdio.h>
#include "main.h"

/**
 * print_sign - print n's sign
 * @n: any valid int
 *
 * Return: -1 if n is negative, 0 if n is 0, and 1 if n is positive
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
}
