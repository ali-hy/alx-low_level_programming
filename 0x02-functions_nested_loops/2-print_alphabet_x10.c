#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char c;
	
	while (i--)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_printchar(c);
		}
	}
	_printchar('\n');
}
