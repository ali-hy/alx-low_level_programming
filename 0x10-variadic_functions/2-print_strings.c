#include "variadic_functions.h"

/**
 * print_strings - prints a list of stirngs
 * @separator: string to separate list elements
 * @n: number of strings
 * @...: list of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(strs, n);
	for (i = 0; i < n - 1, i++)
	{
		str = va_arg(strs, char *);
		str = str == NULL ? "(nil)" : str;

		if (separator != NULL)
			printf("%s%s", str, separator);
		else 
			printf("%s", str);
	}

	str = va_arg(strs, char *);
	str = str == NULL ? "(nil)" : str;
	printf("%s\n", str);

	va_end(strs);
}
