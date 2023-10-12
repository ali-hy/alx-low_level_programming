#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
