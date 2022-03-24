
/**
 * string_toupper - uppercase lowercases' letter of a string
 * @s: the string
 *
 * Return: a pointer to the string
 */
char *string_toupper(char *s)
{
	char *ret = s;

	while (*s != '\0')
	{
		if ('a' <= *s && *s <= 'z')
			*s = 'A' + *s - 'a';
		s++;
	}

	return (ret);
}
