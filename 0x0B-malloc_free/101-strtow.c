#include <stdlib.h>
#include <stdio.h>

int word_count(char *str);

/**
 * strtow - splits into words
 * @str: An string
 *
 * Return: An array of string
 */
char **strtow(char *str)
{
	char **ws = NULL;
	int wc = 0, i = 0;
	char *s = NULL, *e = NULL;

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	ws = malloc(sizeof(*ws) * (wc + 1));
	if (ws != NULL)
	{
		i = 0;
		wc = 0;
		s = str;
		while (*s != '\0')
		{
			if (*s != ' ')
			{
				e = s;
				while (*e != ' ' && *e != '\0')
					e++;

				ws[wc] = malloc(sizeof(char) * (e - s + 1));
				if (ws[wc] == NULL)
				{
					while (wc >= 0)
						free(ws[wc--]);
					return (NULL);
				}

				i = 0;
				while (s != e)
				{
					ws[wc][i++] = *s;
					s++;
				}
				ws[wc++][i] = '\0';
			}
			else
				s++;
		}
	}
	ws[wc] = NULL;
	return (ws);
}

/**
 * word_count - count the words in a string
 * @str: A string
 *
 * Return: The word count
 */
int word_count(char *str)
{
	int wc = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			while (*str != ' ' && *str != '\0')
				str++;
			wc++;
		}
		else
			str++;
	}

	return (wc);
}
