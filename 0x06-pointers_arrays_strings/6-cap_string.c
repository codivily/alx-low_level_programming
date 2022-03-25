#include <stddef.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: A pointer to the string
 */
char *cap_string(char *s)
{
	char *seps = " \t\n\r,;.!?\"(){}";
	char *ret = s;
	char *sep = NULL;

	while (*s != '\0')
	{
		if ((sep == NULL || *sep != '\0') && 'a' <= *s && *s <= 'z')
		       *s = 'A' + *s - 'a';

		sep = seps;
		while (*sep != '\0' && *sep != *s)
			sep++;
		s++;
	}

	return (ret);
}
