#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 * @s: any string
 */
void puts_half(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len / 2; i < len; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
