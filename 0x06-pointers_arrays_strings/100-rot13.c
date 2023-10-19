#include <stdio.h>
#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string
 * Return: resultant string
 */
char *rot13(char *s)
{
	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j, isCaps;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				isCaps = j >= 26;
				s[i] = letters[(j + 13) % 26 + (isCaps * 26)];
				break;
			}
		}
	}

	return (s);
}
