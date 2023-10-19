#include <stdio.h>
#include "main.h"

/**
 * isSeparator - checks if a character is a separator
 * @c: character to check
 * Return: 1 if c is a separator, 0 otherwise
 */
int isSeparator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - capitalize the first letter of every word
 * @s: string
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int i, cap = 1, diff = 'A' - 'a';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isSeparator(s[i]))
		{
			cap = 1;
		}
		else if (cap)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] += diff;

			cap = 0;
		}
	}

	return s;
}
