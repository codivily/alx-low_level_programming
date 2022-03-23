#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{

	char *p = s;
	char nums[58];
	int i = 0;

	for (i = 0; i < 58; i++)
		nums[i] = '\0';

	nums[0] = '4';
	nums[32] = '4';
	nums[4] = '3';
	nums[36] = '3';
	nums[14] = '0';
	nums[46] = '0';
	nums[19] = '7';
	nums[53] = '7';
	nums[11] = '1';
	nums[43] = '1';

	while (*p != '\0')
	{
		i = (*p) - 'A';

		if (i >= 0 && i < 60 && nums[i] != '\0')
			*p = nums[i];
		p++;
	}
	printf("\n");

	return (s);
}
