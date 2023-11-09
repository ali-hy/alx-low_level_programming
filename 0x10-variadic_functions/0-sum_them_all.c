#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums any number of ints passed into it
 * @n: number of ints
 * @...: list of ints
 * Return: the sum of all of the ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);

	va_end(nums);
	return (sum);
}
