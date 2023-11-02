#include <stdio.h>
#include "main.h"

/**
 * realloc - reallocates memory and attempts to change its size
 * @buffer: ptr to allocated memeory
 * @old_size: old size of buffer
 * @new_size: size of buffer after resize
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, j;
	void *res;

	res = malloc(sizeof(*ptr) * new_size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		res[i] = ptr[i];

	return (res);
}
