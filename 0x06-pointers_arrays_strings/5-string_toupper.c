#include <stdio.h>
#include "main.h"

/**
 * string_toupper - makes all characters in a string uppercase
 * @s: string
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 'A' - 'a';
		}
	}

	return s;
}
