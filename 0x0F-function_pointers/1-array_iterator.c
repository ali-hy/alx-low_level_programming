#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - run function "action" on all array elements
 * @array: array to iterate over
 * @size: array size
 * @action: function to run on all arrays
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i;

	if (action == NULL)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
