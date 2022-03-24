
/**
 * string_toupper - uppercase lowercases' letter of a string
 * @s: the string
 *
 * Return: a pointer to the string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if ('a' <= *p && *p <= 'z')
			*p = 'A' + ('a' - *p);
		p++;
	}

	return (s);
}
