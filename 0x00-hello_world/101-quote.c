#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *buffer = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, buffer, 58);

	return (1);
}