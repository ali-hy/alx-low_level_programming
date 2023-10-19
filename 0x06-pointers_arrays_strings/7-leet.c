#include <stdio.h>
#include "main.h"

/**
 * leet - encode string using 1337
 * @s: string
 * Return: resulting string
 */
char *leet(char *s)
{
	char *shouldChange = "aAeEoOtTlL";
	char *changeTo = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; shouldChange[j] != '\0'; j++)
		{
			if (shouldChange[j] == s[i])
			{
				s[i] = changeTo[j / 2];
			}
		}
	}

	return s;
}
