#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a horizontal line
 * @n: length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
