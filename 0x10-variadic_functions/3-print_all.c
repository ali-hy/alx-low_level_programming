#include "variadic_functions.h"

/**
 * print_nextc - ...
 * @list: ...
 */
void print_nextc(va_list list)
{
	int c = va_arg(list, int);
	printf("%c", (char)c);
}

/**
 * print_nexti - ...
 * @list: ...
 */
void print_nexti(va_list list)
{
	int i = va_arg(list, int);
	printf("%i", i);
}

/**
 * print_nextf - ...
 * @list: ...
 */
void print_nextf(va_list list)
{
	double f = va_arg(list, double);
	printf("%f", (float)f);
}

/**
 * print_nexts - ...
 * @list: ...
 */
void print_nexts(va_list list)
{
	char *s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints many things depending on format
 * @format: defines types of items on list
 * @...: list
 */
void print_all(const char *format, ...)
{
	int i = 0;
	char code;
	void (*p_func[256])(va_list);
	void (*curr_func)(va_list);
	va_list elements;

	while (i < 256)
	{
		p_func[i] = NULL;
		i++;
	}

	p_func['c'] = print_nextc;
	p_func['i'] = print_nexti;
	p_func['f'] = print_nextf;
	p_func['s'] = print_nexts;

	va_start(elements, format);
	i = 0;
	while (format[i] != '\0')
	{
		code = format[i];
		
		curr_func = p_func[(int)code];
		if (curr_func == NULL)
		{
			i++;
			continue;
		}
		curr_func(elements);
		i++;
	}
	printf("\n");
	va_end(elements);
}
