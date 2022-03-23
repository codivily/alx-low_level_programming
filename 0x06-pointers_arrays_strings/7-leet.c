/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *s)
{

	char *p = s;
	char nums[60] = {'\0'};
	int i = 0;

	nums[0] = '4';
	nums[33] = '4';
	nums[4] = '3';
	nums[37] = '3';
	nums[14] = '0';
	nums[47] = '0';
	nums[19] = '7';
	nums[52] = '7';
	nums[11] = '1';
	nums[44] = '1';

	while (*p != '\0')
	{
		i = 'A' - *p;

		if ('A' <= *p && *p <= 'z' && nums[i] != '\0')
			*p = nums[i];
		p++;
	}

	return (s);
}
