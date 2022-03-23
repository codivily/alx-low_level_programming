
/**
 * _strcat - function that concatenates two strings
 * @dest: the destinstaion string
 * @src: the source string
 *
 * Return: a ponter to the dest string
 */
char *_strcat(char *dest, char *src)
{

	char *ret = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
