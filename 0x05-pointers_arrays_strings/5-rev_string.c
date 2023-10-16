#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (s[len] != '\n')
		len++;

	for (i = 0; i < len - 1; i++, len--)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = tmp;
	}
}
