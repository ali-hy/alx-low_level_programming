#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers
 * @separator: string that separates list
 * @n: count of numbers to print
 * @...: list of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned i;

	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(nums, int), separator);
	}
	printf("%d\n", va_arg(nums,int));
	va_end(nums);
}