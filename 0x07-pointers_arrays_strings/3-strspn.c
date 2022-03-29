
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 *
 * Return: the length of th eprefix subscriting
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	while (*s != '\0' && *s != *accept)
		s++;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		s++;
		accept++;
		length++;
	}

	return (length);
}
