#include <stdio.h>
#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: string
 * @accept: letters expected in prefix
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, is_prefix;

	for (i = 0; is_prefix && s[i] != '\0'; i++)
	{
		is_prefix = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				is_prefix = 1;
				break;
			}
		}
	}

	return (i - 1);
}
