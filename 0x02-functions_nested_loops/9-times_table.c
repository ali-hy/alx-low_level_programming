#include <stdio.h>
#include "main.h"

/**
 * print_number - prints int to take up 3 spaces
 * @n: any valid int
 */
void print_number(int n)
{
	_putchar(' ');
	if (n / 10 > 0)
	{
		_putchar('0' + (n / 10));
	}
	else
	{
		_putchar(' ');
	}
	_putchar('0' + n % 10);
}


/**
 * times_table - print the 9s timetable
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 1)
				_putchar('0');
			else
				print_number(i * j);

			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
