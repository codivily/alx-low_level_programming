#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints anything
 * @format: The format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s = NULL;
	int i = 0;

	va_list ap;
	va_start (ap, *format);


	while (format[i] != '\0')
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
	}

	va_end(ap);
	printf("\n");
}
