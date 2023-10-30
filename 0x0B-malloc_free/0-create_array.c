#include <stdio.h>
#include "main.h"

/**
 * crate_array - creates a char array and initializes it with a char
 * @size: size of the array
 * @c: character to fill the array with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *res;

	if (size == 0)
		return NULL;

	res = malloc(sizeof(char) * size);
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
