#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 *
 * Starting from 00:00 to 23:59 * @n: The number
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}

