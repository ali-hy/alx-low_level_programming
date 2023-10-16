#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two ints
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
