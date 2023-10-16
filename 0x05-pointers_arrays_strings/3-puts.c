#include <stdio.h>
#include "main.h"

/**
 * _puts - put string in stdout
 * @s: string to print
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}
}
