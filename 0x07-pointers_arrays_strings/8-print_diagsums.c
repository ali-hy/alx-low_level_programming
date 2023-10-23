#include <stdio.h>
#include "main.h"

/**
 * print_digasums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: pointer to matrix
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, pd = 0, nd = 0;

	for(i = 0; i < size; i++)
	{
		pd += a[i + size * i];
		nd += a[i + size * (size - i - 1)];
	}

	printf("%d, %d\n", pd, nd);
}
