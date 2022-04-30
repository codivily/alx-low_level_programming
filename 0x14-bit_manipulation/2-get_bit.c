#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n:  An unsigned integer
 * @index: The index
 *
 * Return: Value of a bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	return ((n >> index) & 0x01);
}
