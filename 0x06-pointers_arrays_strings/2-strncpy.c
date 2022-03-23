
/**
 * _strncpy - copies a strings
 * @dest: the destinstaion string
 * @src: the source string
 * @n: number of by at mose from src to copy
 *
 * Return: a ponter to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{

	char *ret = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest);
}
