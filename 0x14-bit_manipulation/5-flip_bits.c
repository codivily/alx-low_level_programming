#include "main.h"


/**
 * flip_bits - return the number of bit needed to be flipped
 * @n: A unsigned long int
 * @m: An unsigned long int
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 0x01) != (m & 0x01))
			i++;
		n >>= 1;
		m >>= 1;
	}

	return (i);
}
