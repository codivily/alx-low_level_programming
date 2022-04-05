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
	int i = 0;
	int len = 0;

	if (s == NULL)
		return (NULL);

	/* compute the length of the sing */
	while (*(s + i) != '\0')
		i++;

	/* allocating memory */
	dup = (char *)malloc(sizeof(char) * i);

	if (dup != NULL)
	{
		/* duplicating */
		while (i >= 0)
		{
			dup[i] = s[i];
			i--;
		}
	}

	return (dup);
}
