#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	_putchar(*(s++));

	if (*s == '\0')
		_putchar('\0');
	else
		_puts_recursion(s);
}
