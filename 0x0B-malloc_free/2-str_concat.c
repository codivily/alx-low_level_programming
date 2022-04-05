#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: A string
 * @s2: A string
 *
 * Return: A stting s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	char *tmp = NULL;
	unsigned int s_len = 0;
	unsigned int i = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* compute s1 & s2 lenghts */
	while (*(s1 + i) != '\0')
		i++;
	s_len = i;

	i = 0;
	while (*(s2 + i) != '\0')
		i++;
	s_len += i;

	/* allocating memory */
	s = malloc(sizeof(char) * (s_len + 1));

	/* copying s1 & s2 */
	if (s != NULL)
	{
		tmp = s;
		i = 0;

		while (*s1 != '\0')
			*(tmp + (i++)) = *(s1++);

		while (*s2 != '\0')
			*(tmp + (i++)) = *(s2++);

		*tmp = '\0';
	}

	return (s);
}

