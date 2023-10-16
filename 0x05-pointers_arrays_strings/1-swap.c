#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two ints
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
