
/**
 * string_toupper - uppercase lowercases' letter of a string
 * @s: the string
 *
 * Return: a pointer to the string
 */
char * string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if ('A' <= *p && *p <= 'Z')
			*p = 'a' + ('A' - *p);
		p++;
	}

	return (s);
}
