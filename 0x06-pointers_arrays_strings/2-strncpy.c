#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy maximum of n chars to a string
 * @dest: destination string
 * @src: source string
 * @n: maximum characters to copy
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

