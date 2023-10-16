#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Holberton!";
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);

	return (0);
}
