#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void *ptr = malloc(sizeof(char) * 10);
	char *lptr = malloc(sizeof(char) * 10);

	if (ptr == NULL)
		return (1);

	printf("void ptr: %ld\n", sizeof(*ptr));
	printf("char ptr: %ld\n", sizeof(lptr));

	return (0);
}
