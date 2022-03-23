
/**
 * _strncat - function that concatenates two strings
 * @dest: the destinstaion string
 * @src: the source string
 * @n: number of by at mose from src to copy
 *
 * Return: a ponter to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{

	char *ret = dest;

	while (*dest != '\0')
		dest++;

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
