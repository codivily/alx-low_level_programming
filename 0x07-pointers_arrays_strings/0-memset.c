
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
	while (n-- > 0)
		*(s + n) = b;

	return (s);
}
