#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: destination string
 * @src: string to concat
 * Return: dest
 */
char *_strcat(char *dest, char *src);
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = src[i];

	return (dest);
}
