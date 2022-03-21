#include "main.h"


/**
 * puts_half - prints half of a string
 * @str: a pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int half_length = -1;
	char *p = str;
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}

	if (i % 2 == 1)
		half_length = (i - 1) / 2;
	else
		half_length = i / 2;

	for (i = 0; i < half_length; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
