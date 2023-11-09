#include "variadic_functions.c"

/**
 * print_c - print a char
 * @c: char
 */
void print_c(char c)
{
	printf("%c", c);
}

/**
 * print_i - print an int
 * @i: int
 */
void print_i(int i)
{
	printf("%i", i);
}

/**
 * print_f - print a float
 * @f: float
 */
void print_f(float f)
{
	printf("%f", f);
}

/**
 * print_s - print a string
 * @s: string
 */
void print_s(char *s)
{
	printf("%s", s);
}

/**
 * print_all - prints many things depending on format
 * @format: defines types of items on list
 * @...: list
 */
void print_all(const char *format, ...)
{
	int i = 0, j = 0;
	char code;
	void (*p_func[256])(void);
	void (*curr_func)(void);
	va_list elements;

	while (i < 256)
		p_func[i] = NULL;

	p_func['c'] = print_c;
	p_func['i'] = print_i;
	p_func['f'] = print_f;
	p_func['s'] = print_s;

	va_start(elements, 10);
	while (format[i] != '\0')
	{
		code = format[i];
		
		curr_func = p_func[code];
		if (curr_func == NULL)
		{
			i++;
			continue;
		}
		curr_func(va_arg(elements, void));
		i++;
	}
	va_end(elements);
}
