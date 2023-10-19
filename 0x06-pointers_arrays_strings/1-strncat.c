#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate strings up until n chars
 * @dest: destination string
 * @src: source string
 * @n: maximum number of chars to concatinate
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
