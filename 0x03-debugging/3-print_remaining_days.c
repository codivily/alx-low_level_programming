#include <stdio.h>
#include "main.h"

/**
 *print_remaining_days - takes a date and prints how many days are
 *left in the year, taking leap years into account
 *@month: month in number format
 *@day: day of month
 *@year: year
 *Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int month_ = 1;
	int day_ = 0;
	int is_leap_year =
		((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	int is_valid_date =
		((month % 2 == 1)
		 || (day <= (month == 2 ? is_leap_year ? 29 : 28 : 30)))

	if (is_valid_date)
	{
		while (month_ < month)
		{
			day_ += 30 + (month_ % 2);
			month_++;
		}

		if (month_ >= 2)
			day_ -= (is_leap_year ? 1 : 2);

		day_ += day;
		printf("Day of the year: %d\n", day_);
		printf("Remaining days: %d\n", 366 - day_);
	}

	else
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
}
