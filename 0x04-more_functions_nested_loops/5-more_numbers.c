#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print nums from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (n / 10 > 0)
				_putchar('0' + (n / 10));

			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
