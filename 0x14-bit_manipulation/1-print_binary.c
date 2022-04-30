#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary represenation of a number
 * @n: An unsigned long integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_ = 0x00;
	int i = 0;

	do {
		n_ = ((n_ << 1) | (n & 0x01));
		n >>= 1;
		i++;
	} while (n > 0);

	while (i-- > 0)
	{
		_putchar('0' + (n_ & 0x01));
		n_ >>= 1;
	}
}

