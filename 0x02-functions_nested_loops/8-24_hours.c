#include <stdio.h>
#include "main.h"

/**
 * print_two_digits - prints ints as 2 digits
 */
void print_two_digits(int n)
{
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

/**
 * jack_bauer - print every minute from 00:00 till 23:59
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print_two_digits(i);
			_putchar(':');
			print_two_digits(j);
			_putchar('\n');
		}
	}
}
