#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;

	for (year = 0; year <= 4000; year += 4)
	{
		day = 29;
		printf("Date: %02d/%02d/%04d\n", month, day, year);

		day = convert_day(month, day);

		print_remaining_days(month, day, year);
		printf("\n");
	}
	return (0);
}
