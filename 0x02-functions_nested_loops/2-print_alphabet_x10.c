#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char c;

	while (i--)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
