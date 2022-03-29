#include <stddef.h>

/**
 * _strchr - locates a a charaecter in a string
 * @s: the string to search in
 * @c: the character to search for
 *
 * Return: A pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;

	return (*s == '\0' ? NULL : s);
}
