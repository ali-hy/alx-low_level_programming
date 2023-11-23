#include "main.h"

/**
 * binary_to_uint - turn string representation of binary number to unsigned int
 * @b: string represenation of binary number
 * Return: unsigned int represented by string
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int res = 0, power = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}

	for (; len > 0; len--)
	{
		res += (b[len - 1] - '0') * power;
		power *= 2;
	}

	return (res);
}
