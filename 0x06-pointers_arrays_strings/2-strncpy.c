
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

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	if (*src == '\0')
		*dest = '\0';

	return (ret);
}
