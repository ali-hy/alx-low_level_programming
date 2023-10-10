#include <stdio.h>
#include "main.h"

/**
 * sign - get sign of an integer
 * @n: any integer
 *
 * Return: -1 if negative, 0 if 0, 1 if positive
 */
int sign(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (1);

	return (0);
}

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: any integer
 */
void print_to_98(int n)
{
	int i, step = sign(98 - n);
	for (i = n; i != 98; i += step)
	{
		printf("%d, ", i);
	}
	printf("%d\n", 98);
}
