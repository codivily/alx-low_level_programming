#include "main.h"


/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned char endian[2] = {1, 0};
	short x = *(short *) endian;

	/* little endian */
	if (x == 1)
		return (1);

	/* big endian. x = 256 */
	return (0);
}
