#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: any integer
 */
void print_to_98(int n)
{
	int i, sign = sign(98 - n);
	for (i = n; i != 98; i += sign)
	{
		printf("%d, ", i);
	}
	printf("%d", 98)
}
