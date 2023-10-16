#include <stdio.h>
#include "main.h"

/**
 * _strcpy - cpy a string from source to destination
 * @dest: the destination string
 * @src: the source string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}

	return dest;
}
