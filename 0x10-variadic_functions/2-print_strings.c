#include <stdarg.h>
#include <stdio.h>



/**
 * print_strings - prints strings
 * @separator: a separator
 * @n: arguments count
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s = NULL;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}

	va_end(ap);

	printf("\n");
}
