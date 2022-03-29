#include <stddef.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 *
 * Return: the length of th eprefix subscriting
 */
unsigned int _strspn(char *s, char *accept)
{
	int num = 0;
	char *p = NULL;

	while (*s)
	{
		for (p = accept; *p != '\0' && *p != *s; p++)
			;

		if (*p)
			num++;
		else
			break;
		s++;
	}

	return (num);
}
