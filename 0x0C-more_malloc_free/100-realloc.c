#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates memory and attempts to change its size
 * @ptr: ptr to allocated memeory
 * @old_size: old size of buffer
 * @new_size: size of buffer after resize
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr_c = ptr, *res;

	if (new_size <= 0)
	{
		if (ptr != NULL)
			free(ptr);

		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	res = malloc(new_size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		res[i] = ptr_c[i];

	if (ptr != NULL)
		free(ptr);

	return (res);
}
