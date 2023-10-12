#include <stdio.h>
#include "main.h"

/**
 * print_diagonal: prints a diagonal line
 * @size: size of diagonal line
 */
void print_diagonal(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
