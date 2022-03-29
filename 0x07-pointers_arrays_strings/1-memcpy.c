
/**
 * _memcpy - copies memory area
 * @dest: destination area
 * @src: source area
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- >= 0)
		*(deskt + n) = *(src +n);

	return (dest);	
}
