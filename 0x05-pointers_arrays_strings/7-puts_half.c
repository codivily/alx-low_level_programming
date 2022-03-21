#include "main.h"


/**
 * puts_half - prints half of a string
 * @str: a pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	char *p = str;
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}

	if (i % 2 == 1)
		p = str + (i - 1) / 2;
	else
		p = str + (i / 2);

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}

	_putchar('\n');
}
