#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to look into
 * @needle: the string to look for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the subsctring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph = NULL;
	char *pn = NULL;

	while (*haystack)
	{
		ph = haystack;
		pn = needle;

		while (*pn != '\0' && *ph != '\0' && *pn == *ph)
		{
			pn++;
			ph++;
		}

		if (*pn == '\0')
			return (haystack);
		else if (*ph == '\0')
			return (NULL);

		haystack++;
	}

	return (NULL);
}
