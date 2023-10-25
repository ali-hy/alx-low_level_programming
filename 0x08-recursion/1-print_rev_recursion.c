#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse followed by a newline
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
