#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if a char is alpha
 * @c: character to check
 *
 * Return: 1 if c is alpha, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
