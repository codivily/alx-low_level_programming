
/**
 * _strcpy - copies a string to another string
 * @dest: destionation string
 * @src: string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}

