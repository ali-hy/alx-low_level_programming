#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of size nmemb and where each member
 * has a size of `size`
 * @nmemb: number of members
 * @size: size of each member
 * Retrun: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, *res;

	if (nmemb == 0)
		return NULL;

	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		res[i] = 0;

	return (res);
}
