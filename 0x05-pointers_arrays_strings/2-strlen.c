

/**
 * _strlen - return the length of a string
 * @s: a pointer to a string
 *
 * Return: The length of the string (an integer value >= 0)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
