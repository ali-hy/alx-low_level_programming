#include <stdio.h>
#include "main.h"

/**
 * crate_array - creates a char array and initializes it with a char
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *res;

	if (size = 0)
		return NULL;

	res = malloc(sizeof(char) * 8);
	if (res == NULL)
	{
		return (1);
	}

	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}

	return res;
}
