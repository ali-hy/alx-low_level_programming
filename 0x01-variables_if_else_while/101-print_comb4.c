#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
		for (b = a + 1; b <= '9'; b++)
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
