#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		if (n > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
