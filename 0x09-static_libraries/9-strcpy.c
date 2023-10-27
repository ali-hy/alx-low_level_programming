#include <stdio.h>
#include "main.h"

/**
 * _strcpy - cpy a string from source to destination
 * @dest: the destination string
 * @src: the source string
 * Return: returns destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
