#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case letters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
