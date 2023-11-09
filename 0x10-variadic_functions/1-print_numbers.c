#include <stdio.h>
#include "main.h"

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
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(nums, int), separator);
	}
	printf("\n");
}
