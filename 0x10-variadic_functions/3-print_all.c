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
	char *s = NULL, c = '\0';
	int i = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		c = format[i++];
		if (i > 1 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");

		switch (c)
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
				{
					printf("(nil)");
					continue;
				}
				printf("%s", s);
				break;
		}
	}

	va_end(ap);
	printf("\n");
}
