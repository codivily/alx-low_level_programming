
/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: A pointer to the string
 */
char *cap_string(char *s)
{
	char *separators = " \t\n\r,;.!?\"(){}";
	int sep_index = 0;
	char *p = s;
	char prev_char = '\0';

	while (*p != '\0')
	{
		sep_index = 0;

		while (prev_char != separators[sep_index])
			sep_index++;

		if (prev_char != '\0' && 'a' <= *p && *p <= 'z')
			*p = 'A' + ('a' - *p);

		prev_char = *p;
		p++;
	}

	return (s);
}
