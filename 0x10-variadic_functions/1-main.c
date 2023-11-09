#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(" - ", 4, 1, 2, 3, 4);
	print_numbers("", 3, 0, 1, 2);
	print_numbers(NULL, 3, 1, 2, 3);
	print_numbers(", ", 0, 1, 1);

    return (0);
}
