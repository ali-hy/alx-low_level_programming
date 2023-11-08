#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - func that does weird things
 * @array: the array to do weird things on
 * @size: array size
 * @cmp: function that tells you what to return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			return (i);
	}

	return (-1);
}
