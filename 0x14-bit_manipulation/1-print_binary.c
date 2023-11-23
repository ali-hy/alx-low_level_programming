#include "main.h"

/**
 * print_binary - print a number in binary without using
 * arrays, division, or mod
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = ULONG_MAX - LONG_MAX;
	int printing = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\0');
		return;
	}

	while (x > 0)
	{
		if (!printing)
		{
			if (x & n)
			{
				printing = 1;
				_putchar('1');
			}
		}
		else if (x & n)
			_putchar('1');
		else
			_putchar('0');

		x = x >> 1;
	}
}
