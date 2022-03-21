

/**
 * print_rev - prints a string, in reverse
 * @s: A pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *_s = s;

	/* move the pointer the end of the string */
	while (*s != '\0')
		s++;

	/* move back in reverse and print */
	while (s != _s)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
