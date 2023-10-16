#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, end, len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len / 2; i++)
	{
		end = len - 1 - i;
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
	}
}
