#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 * @s: any string
 */
void puts_half(char *s)
{
	int i, len = 0, end;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;
	for (i = end / 2 + 1; i < len; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
