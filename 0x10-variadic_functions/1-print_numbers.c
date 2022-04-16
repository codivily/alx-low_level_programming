#include <stdarg.h>
#include <stdio.h>



/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a separator
 * @n: arguments count
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(ap, int));
	}

	va_end(ap);

	printf("\n");
}
