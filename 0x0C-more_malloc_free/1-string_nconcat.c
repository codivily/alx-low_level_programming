#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: A string
 * @s2: A string
 * @n: The number of byte from s2
 *
 * Return: a point to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s = NULL;
	unsigned int len = 0, i = 0;

	if (s2 != NULL)
	{
		while (s2[len] != '\0')
			len++;
	
		if (n >= len)
			n = len;
	}
	else
		n = 0;

	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			len++;
	}

	s = malloc(len + 1);

	if (s != NULL)
	{
		i = 0;
		if (s1 != NULL)
		{
			while (*s1 != '\0')
				s[i++] = *(s1++);
		}

		while (n--)
			s[i++] = *(s2++);
	}



	return (s);
}
