#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int chars[] = "0123456789";

	for (; n < 10; n++)
		putchar(chars[n]);
	putchar('\n');
	return (0);
}
