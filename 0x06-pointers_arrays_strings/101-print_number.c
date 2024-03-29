#include <stdio.h>
#include "main.h"

/**
 * print_number - prints any integer
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n < 10)
	{
		_putchar('0' + n);
		return;
	}

	print_number(n / 10);
	_putchar('0' + (n % 10));
}
