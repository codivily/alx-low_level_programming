
/**
 * _isupper - check if character is upper case
 * @c: character to be checked
 *
 * Return: 1 if uppercase 0 otherwhise
 */
int _isupper(int c)
{
	return ('A' <= c && c <= 'Z' ? 1 : 0);
}
