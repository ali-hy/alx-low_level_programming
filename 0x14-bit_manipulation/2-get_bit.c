#include "main.h"

/**
 * get_bit - get the value of a bit in a number at a given index
 * @n: number
 * @index: index of bit, startinf from 0 (right to left);
 * Return: value of bit at index, in number n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;
	unsigned int i = 0;

	if (index > 63)
		return (-1);

	while (i < index)
	{
		x = x << 1;
		i++;
	}

	if (x & n)
		return (1);
	else
		return (0);
}
