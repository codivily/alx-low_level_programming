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
	char n;

	for (n = 0; n < 16; n++)
		putchar(n < 10 ? '0' + n : 'a' + n - 10);
	putchar('\n');
	return (0);
}
