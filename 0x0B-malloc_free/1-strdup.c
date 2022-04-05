#include <stdlib.h>

/**
 * _strdup - return a duplicate of sing from a new allocated memory
 * @s: A pointer to a sing
 *
 * Return: The address of the newly allocated location
 */
char *_strdup(char *s)
{
	char *dup = NULL;
	int len = 0;

	if (s == NULL)
		return (NULL);

	/* compute the length of the sing */
	while (*s != '\0')
	{
		s++;
		len++;
	}

	/* allocating memory */
	dup = malloc(sizeof(char) * len);

	if (dup != NULL)
	{
		/* duplicating */
		while (len-- > 1)
			dup[len] = s[len];
	}

	return (dup);
}
