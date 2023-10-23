#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with a
 * constant b
 * @s: pointer to memory area to be filled
 * @b: constant to fill memory area
 * @n: size of memory area to fill
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
