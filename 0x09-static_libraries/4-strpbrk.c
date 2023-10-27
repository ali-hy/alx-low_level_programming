#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first character from s that is also present in accept
 * @s: string to locate in
 * @accept: letters to locate
 * Return: pointer to the first character from s that is also present in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
