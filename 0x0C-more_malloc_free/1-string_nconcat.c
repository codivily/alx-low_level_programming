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
	unsigned int i = 0;
	unsigned int s_len = 0;

	while (s2 != NULL && s2[i] != '\0')
		i++;
	s_len = i;

	if (n > s_len)
		n = s_len;
	else if (n < 0)
	{
		n = 0;
		s_len = 0;
	}

	i = 0;
	while (s1 != NULL && s1[i] != '\0')
		i++;
	s_len += i;

	s = malloc(sizeof(*s) * (s_len + 1));

	if (s != NULL)
	{
		i = 0;
		while (s1 != NULL && *s1 != '\0')
			s[i++] = *(s1++);

		while (n--)
			s[i++] = *(s2++);

		s[i] = '\0';
	}

	return (s);
}