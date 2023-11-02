#include <stdio.h>
#include "main.h"

/**
 * array_range - create an array of integers with member ranging from min to
 * max
 * @min: start number in array
 * @max: end number in array
 * Return: ptr to array
 */
int *array_range(int min, int max)
{
	int i, *res, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	res = malloc(sizeof(int) * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		res[i] = min + i;

	return (res);
}
