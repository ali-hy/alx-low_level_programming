#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: character
 * Return: 1 if c is upperace, 0 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
