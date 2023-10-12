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
	int day, tempday;
	int year;
	int i;

	int years[] = {2023, 2024, 2100, 2400};

	for (i = 0; i < 4; i++)
	{
		year = years[i];
		printf("\n======== %d ==========\n", year);
		for (month = 1; month <= 12; month++)
			for (day = 1; day <= 31; day++)
			{
				printf("Date: %02d/%02d/%04d\n", month, day, year);

				tempday = convert_day(month, day);

				print_remaining_days(month, tempday, year);
				printf("\n");
			}
	}

	return (0);
}
