#include <stdio.h>
#include "main.h"

/** _print_rev - prints string in reverse
 * @s: string to print
 */
void _print_rev(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev(s + 1);
	_putchar(s[0]);
}

/**
 * _print_rev_recursion - prints a string in reverse followed by a newline
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	_print_rev(s);
}
