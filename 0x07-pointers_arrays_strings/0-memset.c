
/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointed
 * @b: constant b
 * @n: first n bytes count
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	while (i < n)
	{
		*p = b;
		p++;
		i++;
	}

	return (s);
}
