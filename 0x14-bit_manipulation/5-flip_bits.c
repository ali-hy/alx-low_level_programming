#include "main.h"

/**
 * flip_bits - returns the number of bits that need to be flipped get from one
 * number to another
 * @n: start number
 * @m: dest number
 * Return: (can be found in the description)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = ULONG_MAX - LONG_MAX;
	unsigned int res = 0;

	while (x > 0)
	{
		if ((n & x) != (m & x))
			res++;

		x = x >> 1;
	}

	return (res);
}
