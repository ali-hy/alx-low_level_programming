#include <stdio.h>
#include "main.h"

/**
 * _strlen - get string length
 * @s: null-terminated string;
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return len;
}
