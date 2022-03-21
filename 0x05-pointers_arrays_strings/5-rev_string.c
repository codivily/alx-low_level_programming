#include "main.h"


/**
 * rev_string - reverses a string
 * @s: a pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char tmp = '\0';

	while (*end != '\0')
		end++;
	end--;

	while (end >= s)
	{

		tmp = *s;
		*s = *end;
		*end = tmp;

		s++;
		end--;
	}
}
