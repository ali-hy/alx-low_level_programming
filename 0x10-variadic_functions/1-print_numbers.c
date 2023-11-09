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
	unsigned int i;

	if (n <= 0)
		printf("\n"), return;

	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	}

	printf("%d\n", va_arg(nums, int));
	va_end(nums);
}
