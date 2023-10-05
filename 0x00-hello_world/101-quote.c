#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *buffer =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buffer, strlen(buffer));

	return (1);
}
