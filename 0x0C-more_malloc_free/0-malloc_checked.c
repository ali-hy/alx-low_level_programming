#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);
	if (res == NULL)
	{
		exit(98);
	}

	return (res);
}
